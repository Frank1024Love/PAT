#include<iostream>
#include<string.h> 
using namespace std;
int main()
{
	char str[100];
	cin>>str;
	int len=strlen(str);//总的长度 
	int round=(len+2)/3,bottom=len+2-round*2;//找规律 ！ 
	for(int i=0;i<round-1;i++)//共round行，先输出前round-1行 
	{
		cout<<str[i];//从前往后 
		for(int j=0;j<bottom-2;j++)//中间的空格数固定！ 
		{
			cout<<" ";
		}
		cout<<str[len-i-1]<<endl;//从后往前 对称性思想！！！！！ 
	}
	for(int i=0;i<bottom;i++)//输出最后一行 
	{
		cout<<str[round+i-1];
	}
	return 0;
}
