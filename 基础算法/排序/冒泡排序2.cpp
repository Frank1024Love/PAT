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
    // n��Ԫ�ؽ���n-1������,i��1��n-1,j��0��n-i-1 (����i��n-1��1 j��0��i-1) 
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
