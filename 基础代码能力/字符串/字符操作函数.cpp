#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	
	
//***cin cout*** һ�㲻�Ƽ�ʹ��ʱ���scanf printf�� 
	char str[100];
	cin.getline(str,100); 
	puts(str);
	
//	***scanf***
	char str1[1000];
	scanf("%s",str1);//�Կո���߻�����Ϊ�ս� 
	cout<<str1<<endl;


//	***getchar & puthchar***
	char str2[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			str2[i][j]=getchar();//���뵥���ַ� 
		}
		getchar();   //�˴��������ǵ������ʽ��Ҫ��Ϊ����һ�е�ʱ��ʹ��һ��getchar�����������ջ��з�'/n' 
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		   putchar(str2[i][j]);//��������ַ� 
		}
	}


//	***gets & puts***
	char str3[3][4];//�������ʵ�ʵ����ݸ���Ҫ��1 
	for(int i=0;i<3;i++){
		gets(str3[i]);//����һ�У��涨��һ�еĸ�������ʵ������ĸ�������Ϊ�����ĩβ��Ҫ��ӽ�����/n 
	} 
	for(int i=0;i<3;i++){
		puts(str3[i]);
		cout<<endl;
	}
	
	
  return 0;
}
