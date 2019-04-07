#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
using namespace std;
struct node{
	string name;
	string id;
	int grade;
};
bool cmp(node a,node b){
	return a.grade>b.grade;
}
int main(){
	int min_score,max_score,n,grade;
	string name,id;
	vector<node> v;
	cin>>n;
	for(int i=0;i<n;i++){
		node t;
		cin>>t.name>>t.id>>t.grade;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),cmp);
	cin>>min_score>>max_score;
	int flag=0; 
	for(int i=0;i<v.size();i++){
		if(v[i].grade>=min_score&&v[i].grade<=max_score){
			flag=1;
			cout<<v[i].name<<" "<<v[i].id<<endl;
		}
	}
	if(flag==0){
		cout<<"NONE"; 
	}
    return 0;
}

