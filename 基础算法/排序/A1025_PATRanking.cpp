#include<iostream>
#include <algorithm>
#include<vector>
#include<string.h>
using namespace std;
struct student{
	long long int id;
	int score,final_rank,location_num,local_rank;
}; 
bool cmp1(student a,student b){
	return a.score!=b.score? a.score>b.score: a.id<b.id;
}
int main(){
	int places,snum;
	cin>>places; 
	vector<student> final;//存放最终信息的数组 
	for(int i=1;i<=places;i++){
		cin>>snum;
		vector<student> t(snum);
		for(int j=0;j<snum;j++){
			t[j].location_num=i;
			cin>>t[j].id>>t[j].score;
		}
		sort(t.begin(),t.end(),cmp1);//排序一个考场的考生 
		t[0].local_rank=1;
		final.push_back(t[0]);
		for(int j=1;j<snum;j++){//将一个考场的考生进行内排序 
//			t[j].score=t[j-1].score? t[j].local_rank=t[j-1].local_rank:t[j].local_rank=t[j-1].local_rank+1;
        t[j].local_rank = (t[j].score == t[j - 1].score) ? (t[j - 1].local_rank) : (j + 1);
			final.push_back(t[j]); //将一个考场的考生放入 
		}		
	}
	sort(final.begin(),final.end(),cmp1);//将全部的考生信息进行排序 
	final[0].final_rank=1;
	for(int i=1; i<final.size();i++){
//	final[i].score==final[i-1].score ? final[i].final_rank=final[i-1].final_rank : final[i].final_rank=final[i-1].final_rank+1;
   final[i].final_rank = (final[i].score == final[i - 1].score) ? (final[i - 1].final_rank) : (i + 1);
	} 
	cout<<final.size()<<endl;
	for(int i=0;i<final.size();i++){
		printf("%013lld %d %d %d\n", final[i].id, final[i].final_rank, final[i].location_num, final[i].local_rank);
	}
    return 0;
}

