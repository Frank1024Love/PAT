#include<iostream>
#include<string.h>
#include <algorithm>
#include<map>
#include<vector>
using namespace std;
int rate[25]={0}; 
struct node{
	string name;
	int status,month,day,hour,minute,time;
};
bool cmp(node a,node b){
	return a.name!=b.name ? a.name < b.name : a.time < b.time;
}
double getBill(node call){ 
	double total=rate[call.hour] * call.minute+rate[24]*60*call.day;
	for(int i=0;i<call.hour;i++){
		total+=rate[i]*60;
	}
	return total/100.0;
}
int main(){
	//1.录入
	int n;
	for(int i=0;i<24;i++){//记录不同时间段的费用 
		cin>>rate[i];
		rate[24]+=rate[i];
	} 
	cin>>n;
	vector<node> data(n);
	for(int i=0;i<n;i++){
		cin>>data[i].name;
		scanf("%d:%d:%d:%d",&data[i].month, &data[i].day, &data[i].hour, &data[i].minute);
		string statu;
		cin>>statu;//record the status of account as 0 and 1
		data[i].status=(statu=="on-line") ? 1 : 0;
		data[i].time=data[i].day*24*60+data[i].hour*60+data[i].minute; 
	}
	//2.排序
	sort(data.begin(),data.end(),cmp);
	//3.查找 
	map<string,vector<node>> custom;
	for(int i=1;i<n;i++){
		if(data[i].name==data[i-1].name&&data[i-1].status==1&&data[i].status==0){
			custom[data[i-1].name].push_back(data[i-1]);
			custom[data[i-1].name].push_back(data[i]);
		}
	}
	//4.输出 
	for(auto it:custom){//对每个用户的所有有效账单进行遍历  并计算总的费用 
		vector<node> temp=it.second;//存放着一个用户的所有有效的账单信息 
		cout<<it.first;
		printf(" %02d\n",temp[0].month); 
		double total=0.0;
		for(int i=1;i<temp.size();i+=2){//遍历一个用户的所有有效账单并且计算总的花费  i+=2表示连续的两个账单为一次结算 
			double t=getBill(temp[i])-getBill(temp[i-1]);
			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", temp[i - 1].day,
			temp[i - 1].hour, temp[i - 1].minute, temp[i].day, temp[i].hour, 
			temp[i].minute, temp[i].time - temp[i - 1].time, t);
			total+=t;
		}
		printf("Total amount: $%.2f\n",total);
	} 	
    return 0;
}

