#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str[1001];
  cin>>str;
  int len=strlen(str);
  int counter[10]={0};
  for(int i=0;i<len;i++){
    counter[str[i]-'0']++;
  }
  for(int i=0;i<10;i++){
    if(counter[i]!=0){
      cout<<i<<":"<<counter[i]<<endl;
    }
  }
  return 0;
}
