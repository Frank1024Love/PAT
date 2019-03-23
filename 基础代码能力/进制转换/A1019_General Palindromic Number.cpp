#include<iostream>
using namespace std;
int main(){
  int a,d;
  cin>>a>>d;
  int num=0,flag=1;
  int s[100]={0};
  do{
    s[num++]=a%d;
    a/=d;
  }while(a!=0);
  
  for(int i=0;i<=num/2;i++){
    if(s[i]!=s[num-i-1])flag=0;
  }
  
  if(flag==0){
    cout<<"No"<<endl;
    for(int i=num-1;i>=0;i--)
    {
      cout<<s[i];
      if(i!=0)cout<<" ";
    }
  }else{
      cout<<"Yes"<<endl;
    for(int i=num-1;i>=0;i--)
    {
      cout<<s[i];
      if(i!=0)cout<<" ";
    }
  }
  return 0;
}
