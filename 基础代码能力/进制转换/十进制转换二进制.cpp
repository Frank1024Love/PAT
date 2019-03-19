#include<cstdio>
int main(){
	int a,num=0;
	int counter[8];
	scanf("%d",&a); 
	do{
		counter[num++]=a%2; //11 1,5 1,2 1,1,0
		a=a/2;
	}while(a!=0);
	for(int i=num-1;i>=0;i--)
	{
		printf("%d",counter[i]);
	}
} 
