#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int a[6]={0};
int len=sizeof(a)/4;
void selectedSort(int a[],int len){
	for(int i=0;i<len;i++){
		int k=i;
		for(int j=i;j<len;j++){
			if(a[j]<a[k]){
				k=j;
			}
		}
		int t=a[i];
		a[i]=a[k];
		a[k]=t;
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

