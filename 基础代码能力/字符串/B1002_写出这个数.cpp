#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[101];
	cin>>a;
	int sign[101]={0};
	int len=strlen(a);
	int n=0,num=0;
	for(int i=0;i<len;i++){
		n+=(a[i]-'0');
	} 
	char mark[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	while(n!=0){
		sign[num++]=n%10;
		n/=10;
	}
	for(int i=num-1;i>=0;i--){
		cout<<mark[sign[i]];
		if(i!=0)cout<<" ";
	}
	return 0;
 } 
