#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int a[6]={0};
int len=sizeof(a)/4;
void selectedSort(int a[],int len){
	for(int i=0;i<len;i++){//进行n趟操作，每次循环都挑选出比前一部分大而比后一部分小的一个数 
		int k=i;
		for(int j=i;j<len;j++){//选择后半部分中较小的数字 
			if(a[j]<a[k]){
				k=j;
			}
		}
		int t=a[k];
		a[k]=a[i];
		a[i]=t;
	}
}
int main(){
	for(int i=0;i<len;i++){
		cin>>a[i];
	}
	selectedSort(a,len);
	for(int j=0;j<len;j++){
		cout<<a[j]<<endl;
	}
    return 0;
}

