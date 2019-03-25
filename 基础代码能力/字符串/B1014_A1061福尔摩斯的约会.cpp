#include<iostream>
#include<string.h>
#include<ctype.h> 
using namespace std;
  int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int i=0,j=0;
    char t[3];
    while(i<s1.length()&&i<s2.length()){
      if( s1[i]==s2[i] && s1[i]>='A'&&s1[i]<='G'){
        t[0]=s1[i];
      }
    }
    i++;
    while(i<s1.length()&&i<s2.length()){
      if(s1[i]==s2[i]&&(isdigit(s1[i])||(s1[i]>='A'&&s1[i]<='N'))){
        t[1]=s1[i];
      }
    }
    while(j<s3.length()&&j<s4.length()){
      if(s3[j]==s4[j]&&isalpha(s3[j])){
        t[2]=j;
      }
    }
    string week[8]={"MON","TUS","WEN","THU","FRI","SAT","SUN"};
    cout<<week[t[0]-'A']<<" ";
    int month=isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
//    cout<<isdigit(t[1]) ?( t[1]-'0'):(t[1]-'A'+10)<<":"; 
    printf("%02d:02d",month,t[2]);
    return 0;
  }
