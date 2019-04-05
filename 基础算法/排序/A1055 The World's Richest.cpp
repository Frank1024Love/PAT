#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
using namespace std;
struct wealth{
	string name;
	int age;
	int money;
}; 
bool cmp(wealth a,wealth b){
	if(a.money!=b.money){
		return a.money>b.money;
	}else{
		return a.age!=b.age? a.age<b.age : a.name<b.name; 
	}
}
int main(){
	int n,m;
	vector<wealth> v;
	cin>>n>>m;
	while(n--){
		wealth t;
		cin>>t.name>>t.age>>t.money;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),cmp); 
	
	for(int i=1;i<=m;i++){
		vector<wealth> query;
		int querynum,minage,maxage;
		cin>>querynum>>minage>>maxage;
		for(int j=0;j<v.size();j++){
			if(v[j].age>=minage&&v[j].age<=maxage){
				query.push_back(v[j]);
			}
			if(querynum==query.size())break;
		}
		cout<<"Case #"<<i<<endl;
		if(query.size()==0){
				cout<<"None"<<endl;
		}else{		
			for(int j=0;j<query.size();j++)
			{
				cout<<query[j].name<<" "<<query[j].age<<" "<<query[j].money<<endl;
			}
		}
	}
    return 0;
}

