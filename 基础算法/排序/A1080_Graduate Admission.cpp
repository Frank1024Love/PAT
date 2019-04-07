#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
using namespace std;
int n,m,k;
struct school{
	int id;
	int num;
	vector<int> ids;
	int lastid;
};
struct student{
	int id,ge,gi,final,rank;
	int istaken=0;
	vector<int> choice;
	};
bool cmp1(int a,int b){
	return a<b;
}
bool cmp(student a,student b){
	if(a.final!=b.final){
		return a.final>b.final;
	}else{
		return a.ge>b.ge;
	}
}
int main(){ 
	cin>>n>>m>>k;
	vector<student> v1(n);
	vector<school> v2(m);
	for(int i=0;i<v1.size();i++){//将志愿数组的长度进行初始化 
		v1[i].choice.resize(k);
	}
	for(int i=0;i<m;i++){//录入学校的招生人数 
		cin>>v2[i].num;
	}
	for(int i=0;i<n;i++){//录入学生的信息 
        v1[i].id=i;
		cin>>v1[i].ge>>v1[i].gi;
		for(int j=0;j<k;j++)cin>>v1[i].choice[j];
		v1[i].final=(v1[i].ge+v1[i].gi)/2;
	} 
	sort(v1.begin(),v1.end(),cmp);
	v1[0].rank=1;
	for(int i=1;i<v1.size();i++){//编号 
		v1[i].rank=i+1;
		if(v1[i].final==v1[i-1].final&&v1[i].ge==v1[i-1].ge){
			v1[i].rank=v1[i-1].rank;
		} 
	} 
	//根据排名和志愿进行录取
	for(int i=0;i<v1.size();i++){
		for(int j=0;j<k;j++){
			int c=v1[i].choice[j];
			if(v1[i].istaken==0)//表示该学生未被录取
			{ 
			if(v2[c].num!=0){//该学校未招满 
				v2[c].ids.push_back(v1[i].id);
				v1[i].istaken=1;
				v2[c].lastid=i;
				v2[c].num--; 
				break;
			}else if(v1[i].rank==v1[v2[c].lastid].rank){//与上一个录取人分数相同 
				v2[c].ids.push_back(v1[i].id);
				v1[i].istaken=1;
				break;
			}
			} 
		}
	} 
	for(int i=0;i<m;i++){
		if(v2[i].ids.size()!=0){//有学生输出 
			sort(v2[i].ids.begin(),v2[i].ids.end(),cmp1);
			for(int j=0;j<v2[i].ids.size();j++){
				cout<<v2[i].ids[j];
				if(j!=v2[i].ids.size()-1)cout<<" ";
			}
			cout<<endl; 
		}else{
			cout<<endl;
		}
	}
    return 0;
}

