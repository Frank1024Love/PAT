#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	string s1,s2,s0;
	cin>>s1;
	for(int i=0;i<s1.length();i++){//��E���ָ����ȡ�����Ҽ�¼E��λ�� 
		if(s1[i]=='E'){
			s2=s1.substr(i+1);//���E֮����ַ� 
			cout<<s2<<endl; 
			s0=s1.substr(0,i);//���E֮ǰ���ַ� 
			cout<<s0<<endl;
			break;
		}
	}
	if(stoi(s2)==0){//���ָ��Ϊ0��ʱ�������� 
		cout<<s0; 
	} 
	if(stoi(s2)<0){//ָ��Ϊ������ʱ�� 
	  if(s0[0]=='-')cout<<"-";
		cout<<"0.";
		for(int i=0;i<-stoi(s2)-1;i++){
			printf("0");
		}
		cout<<s0[1]<<s0.substr(3); 
	}else{//ָ��Ϊ����ʱ�� 
		string t=s0.substr(3);//��ȡС����������������С����
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
