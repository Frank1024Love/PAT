#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
using namespace std;
int n,k,m;
struct node{
	int id,sum=0,fullmark=0,flag=0;
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
	cin>>n>>k>>m;//n个人 k道题 m条提交记录 
	vector<node> v(n+1);//存放n个人的记录 
	for(int i=1;i<=n;i++){//将每道题的成绩初始化为-1 代表没有提交的标志 
		v[i].scores.resize(k+1,-1);
	}
	vector<int> fullscore(k+1);
	for(int i=1;i<=k;i++)//输入每道题的满分 
	{
		cin>>fullscore[i];
	}
	for(int i=0;i<m;i++){//记录每条记录 
		int pnum,score,id;
		cin>>id>>pnum>>score;
		v[id].id=id;
		v[id].scores[pnum]=max(v[id].scores[pnum],score);
		if(score!=-1) v[id].flag=1;//有编译通过的情况就记为有效 
		else if(v[id].scores[pnum]==-1) v[id].scores[pnum]=-2; //未通过编译记为-2 
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
	for(int i=1;i<v.size();i++){//进行编号 
		v[i].rank=i+1;
		if(v[i].sum==v[i-1].sum){
			v[i].rank=v[i-1].rank;
		}
	}
	for(int i=0;i<v.size();i++)//输出结果 
	{
		if(v[i].flag==1){//被访问过就输出 
			printf("%d %05d %d",v[i].rank,v[i].id,v[i].sum);
			for(int j=1;j<=k;j++){
				if(v[i].scores[j]!=-1&&v[i].scores[j]!=-2) 
				{
					cout<<" "<<v[i].scores[j];
				}else if(v[i].scores[j]==-1){//未被访问的题目 
					cout<<" -";
				}else{//得分为0的题目 
				   cout<<" 0";
				}
			} 
			cout<<endl;
		}
	 } 
    return 0;
}

