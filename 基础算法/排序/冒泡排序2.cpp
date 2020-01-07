#include<cstdio>
int main(){
	int a[]={4,1,5,6,7,8,3};
//	for(int i=6;i>=1;i--){
//		for(int j=0;j<i;j++){
//			if(a[j]<a[j+1])
//			{
//				int t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//		}
//	}   
    // n个元素进行n-1次排序,i从1到n-1,j从0到n-i-1 (或者i从n-1到1 j从0到i-1) 
	for(int i=1;i<=6;i++){
		for(int j=0;j<7-i;j++){
			if(a[j]>a[j+1]){
			int t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
	for(int b=0;b<=6;b++){
		printf("%d ",a[b]);
	}
}
