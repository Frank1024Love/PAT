#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
int a[6]={0};
int len=sizeof(a)/sizeof(int); 
//void insertSort(int a[],int len){
//	for(int i=1;i<len;i++){//ÿ�δӺ�벿�����ó���ǰ������֣����뵽ǰ�벿�ֵĺ���λ�� 
//		int t=a[i],j=i;
//		while(t<a[j-1]){//��ǰ��������ֹ���� 
//			a[j]=a[j-1];//�Ⱥ��ƣ����滻 
//			j--; //δ�ҵ���������ǰ���� 
//		}
//		a[j]=t;//���ں��ʵ�λ�� 
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

