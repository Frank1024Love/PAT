#include<iostream>
using namespace std;
int main(){
	int A,B,sum,a[31]={0};
	int D,i=0;
	cin>>A>>B>>D;
	sum=A+B;
	while(sum!=0)
	{
		a[i++]=sum%D;
		sum/=D;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j];
	}
	return 0;
} 
