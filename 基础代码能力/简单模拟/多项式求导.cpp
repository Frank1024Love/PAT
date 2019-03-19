#include<stdio.h>
int main(){
  int a[1001]={0};
  int m,x,n;
  int counter=0;
  while(scanf("%d%d",&x,&m)!=EOF){
      a[m]=x;
  }

  for(int i=1;i<1000;i++)
  {
    a[i-1]=a[i]*i;
    a[i]=0;
    if(a[i-1]!=0)
    {
      counter++;
    }
  }
  if(counter==0)
  {
    printf("0 0");
  }
  else{
  for(int i=1000;i>=0;i--)
  {
    if(a[i]!=0)
    {
      printf("%d %d",a[i],i);
      counter--;
      if(counter!=0){
        printf(" ");
      }
    }
  }
  }
  return 0;
  
}
