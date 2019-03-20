#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	char c;
	cin>>n>>c;
	int top=(int)sqrt(2.0*(n+1))-1;//需要知道第一行的值是多少 向下取整 
	if(top%2==0)top--;             //要求是奇数 
	int used=(top+1)*(top+1)/2-1;   //输出的全部字符数
	
	//输出上半部分
	for(int i=top;i>=1;i-=2){//字符数从top到1 
		for(int j=0;j<(top-i)/2;j++)//空格数从0到top减去字符数的一半 
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<c;
		}
		cout<<endl;
	} 
	//输出下半部分
	for(int i=3;i<=top;i+=2){//字符数从3到top 
		for(int j=0;j<(top-i)/2;j++)//空格数从top减字符数一半到0 
		{
			cout<<" "; 
		}
		for(int j=0;j<i;j++){
			cout<<c;
		}
		cout<<endl;
	} 
	cout<<n-used;
	return 0;
 } 
