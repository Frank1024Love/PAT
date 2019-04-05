#include<iostream>
#include<string.h>
#include <algorithm>
#include<climits>
#include<vector>
using namespace std;
//int i;
//char sign[5]={'A','C','M','E'};
//struct stu{
//	int grade[4];//代表A C M E 各科的成绩 
//	int id; 
//	int rank;
//};
//bool cmp(stu a,stu b){
//	return a.grade[i]>b.grade[i];
//}
//int main(){
//	int n,m;
//	cin>>n>>m;
//	vector<stu> s;
//	vector<stu> k[4];
//	while(n--){  //录入信息 
//		stu t;
//		cin>>t.id>>t.grade[1]>>t.grade[2]>>t.grade[3];//id C M E
//		t.grade[0]=(t.grade[2]+t.grade[1]+t.grade[3])/3.0+0.5;// 对成绩进行四舍五入 
//		s.push_back(t);//压入数组 
//	}
//	for(i=0;i<=3;i++){
//		sort(s.begin(),s.end(),cmp);//分别按照A C M E的大小进行排序 
//		k[i]=s;
//		k[i][0].rank=1;
//		for(int j=1;j<s.size();j++){//进行编号 
//			k[i][j].rank=j+1;
//			if(k[i][j].grade[i]==k[i][j-1].grade[i]) k[i][j].rank=k[i][j-1].rank;
//		}
//	} 	
//	while(m--){
//		int minrank=INT_MAX,mark,id,flag=0;
//		cin>>id;
//		for(int j=0;j<=3;j++){
//			for(int h=0;h<s.size();h++){
//				if(k[j][h].id==id){
//					flag=1;
//					if(minrank>k[j][h].rank) 
//					{
//					  minrank=k[j][h].rank;
//					  mark=j;
//				   }	
//				}
//			}
//		}
//			if(flag==0){
//			printf("N/A\n");
//		}else{
//			printf("%d %c\n",minrank,sign[mark]);
//		}
//	}
    struct node{
    	int id,best;
    	int score[4],rank[4];
	}stu[2005];
	char c[5]={'A','C','M','E'};
	int exist[1000000],flag=-1;
	bool cmp(node a,node b){
		return a.score[flag]>b.score[flag]; 
	} 
	int main(){
		int n,m,id;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>stu[i].id>>stu[i].score[1]>>stu[i].score[2]>>stu[i].score[3];
			stu[i].score[0]=(stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/3.0+0.5;
		}
		for(flag=0;flag<=3;flag++){
			sort(stu,stu+n,cmp);
			stu[0].rank[flag]=1;
			for(int i=1;i<n;i++){
				stu[i].rank[flag]=i+1;
				if(stu[i].score[flag]==stu[i-1].score[flag])
				stu[i].rank[flag] = stu[i-1].rank[flag];
			} 
		}
		for(int i=0;i<n;i++){
			exist[stu[i].id]=i+1;
			stu[i].best=0;
			int minn=stu[i].rank[0];
			for(int j=1;j<=3;j++){
				if(stu[i].rank[j]<minn){
					minn=stu[i].rank[j];
					stu[i].best=j;
				}
			}
		}
		for(int i=0;i<m;i++){
			cin>>id;
			int t=exist[id];
			if(t){
				int best=stu[t-1].best;
				cout<<stu[t-1].rank[best]<<c[best]<<endl;
			}else{
				cout<<"N/A"<<endl;
			}
		}
    return 0;
}

