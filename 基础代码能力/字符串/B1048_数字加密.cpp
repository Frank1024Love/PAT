#include<iostream>
#include<string.h>
#include<algorithm>
#include<ctype.h>
using namespace std;
int main()
{
	string s1,s2;
	char s3[110]={0};
	cin>>s1>>s2;
	int len1=s1.length();
	int len2=s2.length();
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(int i=0;i<max(len1,len2);i++){
		int num1=i<len1? s1[i]-'0':0; 
		int num2=i<len2? s2[i]-'0':0;
		if(i%2==0){
			int t1=(num1+num2)%13;
			if(t1==10) s3[i]='J';
			else if(t1==11) s3[i]='Q';
			else if(t1==12) s3[i]='K';
			else s3[i]=t1+'0';
		}else{
			int t2=num2-num1;
			if(t2<0)t2+=10;
			s3[i]=t2+'0'; 
		} 
	}
	for(int i=strlen(s3)-1;i>=0;i--){
		cout<<s3[i];
	} 
	return 0;
}
