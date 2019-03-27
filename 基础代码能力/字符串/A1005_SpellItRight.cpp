#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string s1,s2;
  cin>>s1;
  int sum=0;
  string sign[10]={"one","two","three","four","five","six","seven","eight","nine","ten"};
  for(int i=0;i<s1.length();i++){
    sum+=s1[i]-'0';
  }
  s2=to_string(sum);
  for(int i=0;i<s2.length();i++){
  	cout<<sign[s2[i]-'0'];
  	if(i!=s2.length()-1)cout<<" ";
  }
  return 0;
}

