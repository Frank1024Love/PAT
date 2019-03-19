#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		long long sum=a+b;
		if(a>0&&b>0&&sum<0)//正溢出 
		{
			printf("Case #%d:true\n",i++);
		}else if(a<0&&b<0&&sum>=0)//负溢出 
		{
			printf("Case #%d:false\n",i++);
		}else if(sum>c){//无溢出 
			printf("Case #%d:true\n",i++);
		}else{
			printf("Case #%d:false\n",i++);
		}
	} 
	return 0;
}
