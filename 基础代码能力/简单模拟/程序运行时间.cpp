#include<cstdio>
int main()
{
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int a=c2-c1;
	if(a%100>=50)//ËÄÉáÎåÈë 
	{
		a=a/100+1;
	}else{
		a=a/100;
	}
	printf("%02d:%02d:%02d",a/3600,a%3600/60,a%60);//1h=3600s 
	
	return 0;
 } 
