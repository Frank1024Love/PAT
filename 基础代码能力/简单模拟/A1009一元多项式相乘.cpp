#include<stdio.h>
int main()
{
  double s1[1001]={0};
  double s2[2002]={0};
  int n,m;
  double x;
  int counter=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
{
  scanf("%d %lf",&m,&x);
  s1[m]=x;
}
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  scanf("%d %lf",&m,&x);
  for(int j=0;j<1001;j++)
  {
    s2[m+j]+=s1[j]*x;
  }
}
for(int i=2000;i>=0;i--)
{
  if(s2[i]!=0)
  {
    counter++;
  }
}
printf("%d",counter);
for(int i=2000;i>=0;i--)
{
  if(s2[i]!=0)
  printf(" %d %0.1f",i,s2[i]);
}
  return 0;
  
  
}
