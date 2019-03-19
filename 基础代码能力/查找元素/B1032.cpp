#include<stdio.h>
int main(){
  int a[1001]={0};
  int number,score;
  int n;
  int counter=0,max=0;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d %d",&number,&score);
    a[number]+=score;
  }
  for(int i=0;i<1001;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
      counter=i;
    }
  }
  printf("%d %d",counter,max);
  return 0;
}
