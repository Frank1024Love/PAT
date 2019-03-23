#include<iostream>
using namespace std;
int main()
{
  char a[14]={"0123456789ABC"};
  int a1,a2,a3;
  cin>>a1>>a2>>a3;
  cout<<"#";
  printf("%c%c",a[a1/13],a[a1%13]);
  printf("%c%c",a[a2/13],a[a2%13]);
  printf("%c%c",a[a3/13],a[a3%13]);
  return 0;
}
