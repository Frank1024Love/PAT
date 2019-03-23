#include<iostream>
using namespace std;
int main(){
  string b,s;
  int n;
  int counter=0;
  cin>>n;
  counter=n%10;
  n/=10;
  int a=n%10;
  while(a--){
    s+="S";
  }
  n/=10;
  a=n%10;
  while(a--){
    b+="B";
  }
  cout<<b<<s;
  for(int i=1;i<=counter;i++){
    cout<<i;
  }
  return 0;
}
