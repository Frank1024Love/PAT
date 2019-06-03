#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;
struct car{
	string id;
	int time,statu;
};
bool cmp(car a,car b){
	return a.id!=b.id? a.id<b.id : a.time<b.time;
}
bool cmp1(car a,car b){
	return a.time<b.time;
}
int main(){
	int max=-1; 
	int n,k;
	cin>>n>>k;
	vector<string> names;
	vector<car> cars(n);
	vector<car> cars2;
	for(int i=0;i<n;i++){
		cin>>cars[i].id;
		int h1,m1,s1;
		scanf("%d:%d:%d",&h1,&m1,&s1);
		string s;
		cin>>s;
		cars[i].statu=(s=="in")? 1:0;
		cars[i].time=h1*3600+m1*60+s1;
	}
	sort(cars.begin(),cars.end(),cmp);
	map<string,int> total_time; 
	for(int i=1;i<n;i++){
		if((cars[i].id==cars[i-1].id)&&cars[i-1].statu==1&&cars[i].statu==0){
            cars2.push_back(cars[i-1]);
            cars2.push_back(cars[i]);
			total_time[cars[i].id]+=(cars[i].time-cars[i-1].time);
			if(max<total_time[cars[i].id]){
				max=total_time[cars[i].id];
			}
		}
	} 
	sort(cars2.begin(),cars2.end(),cmp1);	
	int now=0,car_num=0; 
	for(int i=0;i<k;i++){//输入k条查询时间 
		int time=0,h,m,s;
		scanf("%d:%d:%d",&h,&m,&s);
		time=h*3600+m*60+s;
		while(now<cars2.size()&&cars2[now].time<=time){
			if(cars2[now].statu==1){
				car_num++;
			}else car_num--;
			now++;
		}
		printf("%d\n",car_num);
	}
	for(auto it:total_time){
		if(it.second==max){
			cout<<it.first<<" ";
		}
	}
	printf("%02d:%02d:%02d", max / 3600, (max % 3600) / 60, max % 60);
	return 0;
}

