#include<stdio.h>
#include<iostream>
#define Num 5
using namespace std;

void BubbleSort(int *p,int n){
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(p[j]>p[j+1]){
			int t=p[j];
			p[j]=p[j+1];
			p[j+1]=t;
			}
		}
	}
}
int main()
{
	int a[Num]={5,3,1,6,7};
	BubbleSort(a,Num);	
    for(int i=0;i<Num;i++){
    	cout<<a[i]<<endl;
	}
	return 0;
}
