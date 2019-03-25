#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	string s1,s2,s0;
	cin>>s1;
	for(int i=0;i<s1.length();i++){//将E后的指数截取，并且记录E的位置 
		if(s1[i]=='E'){
			s2=s1.substr(i+1);//存放E之后的字符 
			cout<<s2<<endl; 
			s0=s1.substr(0,i);//存放E之前的字符 
			cout<<s0<<endl;
			break;
		}
	}
	if(stoi(s2)==0){//如果指数为0的时候就输出了 
		cout<<s0; 
	} 
	if(stoi(s2)<0){//指数为负数的时候 
	  if(s0[0]=='-')cout<<"-";
		cout<<"0.";
		for(int i=0;i<-stoi(s2)-1;i++){
			printf("0");
		}
		cout<<s0[1]<<s0.substr(3); 
	}else{//指数为正的时候 
		string t=s0.substr(3);//截取小数点后的数，即跳过小数点
		if(s0[0]=='-')cout<<"-";
		cout<<s0[1];
		int a=stoi(s2)-t.length();
		if(a<0){
		  for(int i=0;i<t.length();i++){
		    if(i==stoi(s2))cout<<".";
		    cout<<t[i];
		  }
		}else{
		  cout<<t;
		  while(a--){
		    cout<<0;
		  }
		}
	} 
	return 0;
}
