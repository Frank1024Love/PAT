#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
using namespace std;
struct student{
	int id;
	int d,c;
	int sum;
};
bool cmp(student a,student b){
	if(a.sum!=b.sum){
		return a.sum>b.sum;
	}else{
		return a.d!=b.d ? a.d>b.d : a.id<b.id;
	}
}
int main(){
	int m,max_score,min_score;
	vector<student> v[4];
	vector<vector<student> > v(4);
	student t;
	cin>>m>>min_score>>max_score;//录入总人数和最低分数线，优秀分数线 
	int total=m;
	for(int i=0;i<m;i++){        //录入每个考生的信息并进行分类 
		cin>>t.id>>t.d>>t.c;
		t.sum=t.d+t.c;
		if(t.d<min_score||t.c<min_score){
			total--;
		}else if(t.d>=max_score&&t.c>=max_score){
			v[0].push_back(t);
		}else if(t.d>=max_score&&t.c<max_score){
			v[1].push_back(t);
		}else if(t.d<max_score&&t.c<max_score&&t.d>=t.c){
			v[2].push_back(t);
		}else
			v[3].push_back(t);
	}
	printf("%d\n",total);
	for(int i=0;i<4;i++){
		sort(v[i].begin(),v[i].end(),cmp);
		for(int j=0;j<v[i].size();j++){
			printf("%d %d %d\n",v[i][j].id,v[i][j].d,v[i][j].c);//此处使用cout会超时几个 
		}
	}
    return 0;
}

