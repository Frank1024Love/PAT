#include<iostream>
#include<string.h>
#include <algorithm>
#include<vector>
#include<ctype.h>
using namespace std;
int c;
struct node{
	string id;
	string name;
	string  score;
};
bool cmp(node a,node b){
	if(c==1){
		return stoi(a.id)<stoi(b.id);
	}
	else if(c==2){
		return a.name!=b.name ? a.name<b.name : stoi(a.id)<stoi(b.id);
	}else if(c==3){
		return a.score!=b.score ? stoi(a.score)<stoi(b.score) : stoi(a.id)<stoi(b.id);
	}
}
int main(){
	int n;
	cin>>n>>c;
	vector<node> v;
	while(n--){
		node t;
		cin>>t.id>>t.name>>t.score;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		printf("%s %s %s",v[i].id.c_str(),v[i].name.c_str(),v[i].score.c_str());
	}
    return 0;
}

