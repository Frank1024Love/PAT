#include<stdio.h>
int main(){
	int n,m;
	double d;
	double a[1001]={0};
	int counter=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %lf",&m,&d);
		a[m]+=d;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %lf",&m,&d);
		a[m]+=d;
	}
	for(int i=0;i<1001;i++){
		if(a[i]!=0){
			counter++;
		}
	}
	printf("%d",counter);
	for(int i=1000;i>=0;i--){
		if(a[i]!=0){
			printf(" %d %.1f",i,a[i]);
		}
	}
	return 0;
} 

