#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,t;
	string s1,s2;
	cin>>a>>b;
	c=a+b;
	t=c<0? -c:c;
	s1=to_string(t);
	reverse(s1.begin(),s1.end());
	for(int i=0;i<s1.length();i++){
		if(i%3==0)s2+=',';
		s2+=s1[i];
	} 
	reverse(s2.begin(),s2.end());
	if(c<0)cout<<"-";
	for(int i=0;i<s2.length()-1;i++){
		cout<<s2[i];
	}
	return 0;
	
}
