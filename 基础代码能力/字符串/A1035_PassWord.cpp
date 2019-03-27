#include<iostream>
#include<string.h>
using namespace std;
struct Acount{
	string name;
	string password;
}acount,acounts[1001];
int main()
{
	int n;
	cin>>n;
	int a=n;
	int num=0;
	while(n--){
		int flag=0; 
		cin>>acount.name>>acount.password;
		string t=acount.password;
		for(int i=0;i<t.length();i++){
		if(t[i]=='1') {t[i]='@';flag=1;} 
		else if(t[i]=='0'){ t[i]='%';flag=1;} 
		else if(t[i]=='l'){ t[i]='L';flag=1;} 
		else if(t[i]=='O'){ t[i]='o';flag=1;} 
	}
	    acount.password=t;
		if(flag==1)acounts[num++]=acount;
	}
	if(num==0){
		if(a==1){
			cout<<"There is "<<a<<" account and no account is modified";
		}else{
		cout<<"There are "<<a<<" accounts and no account is modified";
		}
	}
	else{
		cout<<num<<endl;
		for(int i=0;i<num;i++){
			cout<<acounts[i].name<<" "<<acounts[i].password<<endl;
		}
	}
	return 0;
}
