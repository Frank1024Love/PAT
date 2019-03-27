#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int a[6]={0};
int len=sizeof(a)/sizeof(int); 
//void insertSort(int a[],int len){
//	for(int i=1;i<len;i++){//每次从后半部分里拿出最前面的数字，插入到前半部分的合适位置 
//		int t=a[i],j=i;
//		while(t<a[j-1]){//往前遍历的终止条件 
//			a[j]=a[j-1];//先后移，后替换 
//			j--; //未找到，继续向前遍历 
//		}
//		a[j]=t;//放在合适的位置 
//	}
//} 

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

