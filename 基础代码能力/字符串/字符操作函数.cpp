#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	
	
//***cin cout*** 一般不推荐使用时间比scanf printf慢 
	char str[100];
	cin.getline(str,100); 
	puts(str);
	
//	***scanf***
	char str1[1000];
	scanf("%s",str1);//以空格或者换行作为终结 
	cout<<str1<<endl;


//	***getchar & puthchar***
	char str2[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			str2[i][j]=getchar();//输入单个字符 
		}
		getchar();   //此处的作用是当输入格式被要求为三个一行的时候，使用一个getchar函数用来吸收换行符'/n' 
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		   putchar(str2[i][j]);//输出单个字符 
		}
	}


//	***gets & puts***
	char str3[3][4];//纵坐标比实际的数据个数要大1 
	for(int i=0;i<3;i++){
		gets(str3[i]);//输入一行，规定的一行的个数大于实际输入的个数，因为数组的末尾需要添加结束符/n 
	} 
	for(int i=0;i<3;i++){
		puts(str3[i]);
		cout<<endl;
	}
	
	
  return 0;
}
