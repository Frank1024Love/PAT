//#include<stdio.h>
//int main()
//{
//  char str[50][50];
//  int num=0;
//  while(scanf("%s",str[num])!=EOF){
//    num++;
//  }
//  for(int i=num-1;i>=0;i--){
//    if(i==0){
//      printf("%s",str[i]);
//    }else{
//      printf("%s ",str[i]);
//    }
//  }
//  return 0;
//}
#include<stdio.h>
int main(){
  int n;
  long long a,b,c;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a+b>c)printf("Case #%d: true",i);
    else printf("Case #%d: false",i);
  }
  return 0;
}
