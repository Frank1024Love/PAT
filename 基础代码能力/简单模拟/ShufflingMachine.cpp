#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
    char kind[6]={'S','H','C','D','J'};
	int Main[55],Next[55],Turn[55];
	for(int i=1;i<=54;i++)
	{
		scanf("%d",&Next[i]);
		Main[i]=i;
	 } 
	 
	 while(n--)
	 {
	 	for(int j=0;j<55;j++)
	 	{
	 		Turn[i]=Main[i];
		 }
	 	for(int i=1;i<55;i++)
	 	{
	 		Main[Next[i]]=Turn[i];
		 }
	 }
	 
	 for(int i=1;i<55;i++)
	 {
	 	Main[i]-=1;
		 printf("%c%d",kind[Main[i]/13],Main[i]%13+1);
		 if(i!=54)printf(" ");
	 }
	return 0;
}



