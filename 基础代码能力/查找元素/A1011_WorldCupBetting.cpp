#include<stdio.h>
int main()
{
	char sign[4]={"WTL"};
	double produce=1.0;
	for(int i=0;i<3;i++)
	{
		double maxprice=0.0;
		int maxchar=0;
		for(int j=0;j<3;j++)
		{
			double a;
			scanf("%lf",&a);
			if(maxprice<a){
				maxprice=a;
				maxchar=j;
			}	
		}
		produce*=maxprice;
		printf("%c ",sign[maxchar]);
	}
	printf("%.2f",(produce*0.65-1)*2);
  return 0;
}

