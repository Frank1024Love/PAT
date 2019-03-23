#include<iostream>
using namespace std;
int main()
{
  long long K=0;
  long long  g1,s1,k1;
  int n=2;
  while(n--){
    scanf("%lld.%lld.%lld",&g1,&s1,&k1);
    K+=g1*29*17+s1*29+k1;
  }
  printf("%lld.%lld.%lld",K/(29*17),K%(29*17)/29,K%29);
  return 0;
}
