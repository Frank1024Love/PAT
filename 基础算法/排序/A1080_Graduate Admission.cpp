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
	for(int i=0;i<v1.size();i++){//��־Ը����ĳ��Ƚ��г�ʼ�� 
		v1[i].choice.resize(k);
	}
	for(int i=0;i<m;i++){//¼��ѧУ���������� 
		cin>>v2[i].num;
	}
	for(int i=0;i<n;i++){//¼��ѧ������Ϣ 
        v1[i].id=i;
		cin>>v1[i].ge>>v1[i].gi;
		for(int j=0;j<k;j++)cin>>v1[i].choice[j];
		v1[i].final=(v1[i].ge+v1[i].gi)/2;
	} 
	sort(v1.begin(),v1.end(),cmp);
	v1[0].rank=1;
	for(int i=1;i<v1.size();i++){//��� 
		v1[i].rank=i+1;
		if(v1[i].final==v1[i-1].final&&v1[i].ge==v1[i-1].ge){
			v1[i].rank=v1[i-1].rank;
		} 
	} 
	//����������־Ը����¼ȡ
	for(int i=0;i<v1.size();i++){
		for(int j=0;j<k;j++){
			int c=v1[i].choice[j];
			if(v1[i].istaken==0)//��ʾ��ѧ��δ��¼ȡ
			{ 
			if(v2[c].num!=0){//��ѧУδ���� 
				v2[c].ids.push_back(v1[i].id);
				v1[i].istaken=1;
				v2[c].lastid=i;
				v2[c].num--; 
				break;
			}else if(v1[i].rank==v1[v2[c].lastid].rank){//����һ��¼ȡ�˷�����ͬ 
				v2[c].ids.push_back(v1[i].id);
				v1[i].istaken=1;
				break;
			}
			} 
		}
	} 
	for(int i=0;i<m;i++){
		if(v2[i].ids.size()!=0){//��ѧ����� 
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

