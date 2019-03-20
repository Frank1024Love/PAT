#include<iostream>
using namespace std;
int main()
{
	char sign[6]={"WTL"};
	double produce=1.0;
	for(int i=0;i<3;i++)
	{
		double maxprice=-1;//此处需要赋值！！！！！！ 
		int maxchar=-1;
		for(int j=0;j<3;j++)
		{
		  double t;
			cin>>t;
			if(maxprice<t){
				maxprice=t;
				maxchar=j;
			}
		}
		produce*=maxprice;
		printf("%c ",sign[maxchar]);
	 } 
	 printf("%.2f",(produce*0.65-1)*2);
  return 0;
}

