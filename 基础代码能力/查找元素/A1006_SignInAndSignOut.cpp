#include<iostream>
#include<climits>//给出最小或者最大的变量值，如INI_MAX即为int型最大值 
using namespace std; 
int main()
{
   int n,min=INT_MAX,max=INT_MIN;
   scanf("%d",&n);
   string firstpid,lastpid;
   for(int i=0;i<n;i++)
   {
   	string pid;
   	cin>>pid;
   	int h1,m1,s1,h2,m2,s2;
   	scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
   	int signin=h1*3600+m1*60+s1;//日期相加进行比较 
   	int signout=h2*3600+m2*60+s2;
   	if(signin<min){
   		min=signin;
   		firstpid=pid;
	   } 
	   if(signout>max)
	   {
	   	max=signout;
	   	lastpid=pid;
	   }
   }
   cout<<firstpid<<" "<<lastpid;
  return 0;
}

