#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	char c;
	cin>>n>>c;
	int top=(int)sqrt(2.0*(n+1))-1;//��Ҫ֪����һ�е�ֵ�Ƕ��� ����ȡ�� 
	if(top%2==0)top--;             //Ҫ�������� 
	int used=(top+1)*(top+1)/2-1;   //�����ȫ���ַ���
	
	//����ϰ벿��
	for(int i=top;i>=1;i-=2){//�ַ�����top��1 
		for(int j=0;j<(top-i)/2;j++)//�ո�����0��top��ȥ�ַ�����һ�� 
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<c;
		}
		cout<<endl;
	} 
	//����°벿��
	for(int i=3;i<=top;i+=2){//�ַ�����3��top 
		for(int j=0;j<(top-i)/2;j++)//�ո�����top���ַ���һ�뵽0 
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
