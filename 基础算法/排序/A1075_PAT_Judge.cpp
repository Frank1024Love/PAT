#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
using namespace std;
int n,k,m;
struct node{
	int id,sum=0,fullmark=0,flag=0;//
	vector<int> scores;
	int rank;
};
bool cmp(node a,node b){
     if(a.sum!=b.sum){
     	return a.sum>b.sum;
	 } else if(a.fullmark!=b.fullmark){
	 	return a.fullmark>b.fullmark;
	 }else return a.id<b.id;

} 
int main(){
	cin>>n>>k>>m;//n���� k���� m���ύ��¼ 
	vector<node> v(n+1);//���n���˵ļ�¼ 
	for(int i=1;i<=n;i++){//��ÿ����ĳɼ���ʼ��Ϊ-1 ����û���ύ�ı�־ 
		v[i].scores.resize(k+1,-1);
	}
	vector<int> fullscore(k+1);
	for(int i=1;i<=k;i++)//����ÿ��������� 
	{
		cin>>fullscore[i];
	}
	for(int i=0;i<m;i++){//��¼ÿ����¼ 
		int pnum,score,id;
		cin>>id>>pnum>>score;
		v[id].id=id;
		v[id].scores[pnum]=max(v[id].scores[pnum],score);
		if(score!=-1) v[id].flag=1;
		else if(v[id].scores[pnum]==-1) v[id].scores[pnum]=-2; 
//		v[id].flag=1;
//		if(score==0||score==-1){
//		if(v[id].scores[pnum]==-1||v[id].scores[pnum]==0){//δ���ʻ��ߵ÷�Ϊ���ʱ����ܸ��ǣ��� 
//			v[id].scores[pnum]=0;
//		}	
//		}else{
//			if(score==fullscore[pnum]){// ��¼�����ֵ����� 
//			v[id].fullmark++;
//		    }
//			v[id].sum-=v[id].scores[pnum];
//			v[id].scores[pnum]=max(v[id].scores[pnum],score); //������Ŀ�ϴ�ķ��� 
//			v[id].sum+=v[id].scores[pnum];
//			cout<<v[id].sum<<endl; 
//		}  
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(v[i].scores[j]!=-1&&v[i].scores[j]!=-2){
				v[i].sum+=v[i].scores[j];
			}if(v[i].scores[j]==fullscore[j]){
				v[i].fullmark++;
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
	v[0].rank=1;
	for(int i=1;i<v.size();i++){//���б�� 
		v[i].rank=i+1;
		if(v[i].sum==v[i-1].sum){
			v[i].rank=v[i-1].rank;
		}
	}
	for(int i=0;i<v.size();i++)//������ 
	{
		if(v[i].flag==1){
			printf("%d %05d %d",v[i].rank,v[i].id,v[i].sum);
			for(int j=1;j<=k;j++){
				if(v[i].scores[j]!=-1&&v[i].scores[j]!=-2)//�÷�Ϊ-1 �� 0 
				{
					cout<<" "<<v[i].scores[j];
				}else if(v[i].scores[j]==-1){//δ�����ʵ���Ŀ 
					cout<<" -";
				}else{
				   cout<<" 0";
				}
			} 
			cout<<endl;
		}
	 } 
    return 0;
}

