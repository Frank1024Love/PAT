#include<cstdio>
int main(){
	long long a,b,da,db;
	scanf("%lld%lld%lld%lld",&a,&da,&b,&db);
	long long sum1=0,sum2=0;
	while(a!=0)//枚举a的每一位 
	{
		if(a%10==da)sum1=sum1*10+da;
		a/=10;
	}
	while(b!=0){
		if(b%10==db)sum2=sum2*10+db;
		b/=10; 
	} 
	printf("%d",sum1+sum2);
     return 0;	
} 
 
