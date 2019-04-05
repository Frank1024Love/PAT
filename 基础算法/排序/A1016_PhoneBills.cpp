#include<iostream>
#include<string.h>
#include <algorithm>
#include<map>
#include<vector>
using namespace std;
struct node{
	string name;
	int status,month,day,hour,minute,time;
};
bool cmp(node a,node b){
	return a.name!=b.name ? a.name < b.name : a.time < b.time;
}

double getBill(node call,int *rate){
	double total=rate[call.hour] * call.minute+rate[24]*60*call.day;
	for(int i=0;i<call.hour;i++){
		total+=rate[i]*60;
	}
	return total/100.0;
}
int main(){
	int rate[25]={0},n;
	for(int i=0;i<24;i++){//record every fee in differ time
		cin>>rate[i];
		rate[24]+=rate[i];
	}
	cin>>n;
	vector<node> data(n);
	//input all message of account 
	for(int i=0;i<n;i++){
		cin>>data[i].name;
		scanf("%d:%d:%d:%d", &data[i].month, &data[i].day, &data[i].hour, &data[i].minute);
		string temp;
		cin>>temp;//record the status of account as 0 and 1
		data[i].status=(temp=="on-line") ? 1 : 0;
		data[i].time=data[i].day*24*60+data[i].hour*60+data[i].minute; //compare as minute
	}
	//sort by name,if name1 equals name2 then sort by time as minutes
	sort(data.begin(),data.end(),cmp);
	map<string,vector<node>> custom;
	for(int i=1;i<n;i++){
		//相邻两者的姓名相同，为同一人，且前者的状态为在线，后者为离线 
		if(data[i].name==data[i-1].name&&data[i-1].status==1&&data[i].status==0){
			custom[data[i-1].name].push_back(data[i-1]);
			custom[data[i].name].push_back(data[i]);
		}
	}
	for(auto it:custom){
		vector<node> temp=it.second;
		cout<<it.first;
		printf(" %02d\n",temp[0].month); 
		double total=0.0;
		for(int i=1;i<temp.size();i+=2){
			double t=getBill(temp[i],rate)-getBill(temp[i-1],rate);
			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", temp[i - 1].day,
			temp[i - 1].hour, temp[i - 1].minute, temp[i].day, temp[i].hour, 
			temp[i].minute, temp[i].time - temp[i - 1].time, t);
			total+=t;
		}
		printf("Total amount: $%.2f\n",total);
	} 	
    return 0;
}

