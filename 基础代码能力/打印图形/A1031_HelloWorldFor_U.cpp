#include<iostream>
#include<string.h> 
using namespace std;
int main()
{
	char str[100];
	cin>>str;
	int len=strlen(str);//�ܵĳ��� 
	int round=(len+2)/3,bottom=len+2-round*2;//�ҹ��� �� 
	for(int i=0;i<round-1;i++)//��round�У������ǰround-1�� 
	{
		cout<<str[i];//��ǰ���� 
		for(int j=0;j<bottom-2;j++)//�м�Ŀո����̶��� 
		{
			cout<<" ";
		}
		cout<<str[len-i-1]<<endl;//�Ӻ���ǰ �Գ���˼�룡�������� 
	}
	for(int i=0;i<bottom;i++)//������һ�� 
	{
		cout<<str[round+i-1];
	}
	return 0;
}
