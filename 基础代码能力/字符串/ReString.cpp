#include<cstdio>
#include<cstring>
#define max 50
int judge(char str[])
{
	int length=strlen(str);
	int flag=1;
	for(int i=0;i<length;i++){
		if(str[i]!=str[length-1-i])
		{
		    flag=0;
		    break;
		}
		else flag=1;;
	}
	return flag;
}

int main(){
	char str[max];
	while(gets(str))
	{
		int flag=judge(str);
		if(flag){
			printf("y");
		}else{
			printf("no");
		}
	}
	
}
