#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int a[6]={0};
int len=sizeof(a)/sizeof(int); 
void insertSort(int a[],int len){
	for(int i=1;i<len;i++){
		int t=a[i],j=i;
		while(t<a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j]=t;
	}
} 

int main(){
	for(int i=0;i<len;i++){
		cin>>a[i];
	} 
	insertSort(a,len);
	for(int i=0;i<len;i++){
		cout<<a[i]<<" ";
	}
    return 0;
}

