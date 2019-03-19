#include<cstdio>
int main(){
	int n,fail1=0,fail2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a1,a2,b1,b2;
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		if(a1+b1==a2&&a1+b1!=b2)
		{
			fail1++;
		}
		if(a1+b1==b2&&a1+b1!=a2){
			fail1++;
		}
	} 
	printf("%d %d",fail1,fail2);
	return 0;
} 
