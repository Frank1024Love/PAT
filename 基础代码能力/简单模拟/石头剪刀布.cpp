#include<stdio.h>

int change(char c){
	if(c=='B')return 0;
	if(c=='C')return 1;
	if(c=='J')return 2;
}
int main(){
	char sign[3]={'B','C','J'};
	int n;
	scanf("%d",&n);
	
	int recordA[3]={0};//记录两人分别胜平负的次数 
	int recordB[3]={0};
	
	int hand_recordA[3]={0}; //记录每种手势获胜的次数 
	int hand_recordB[3]={0}; 
	
	char c1,c2;
	int k1,k2; 
	
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c %c",&c1,&c2);
		k1=change(c1);
		k2=change(c2);
		 
		 if((k1+1)%3==k2){//甲在乙之前，故甲胜，同时更新A B的记录,根据题目要求，记录获胜的手势 
		 	recordA[0]++; 
		 	recordB[2]++; 
		 	hand_recordA[k1]++; 
		 }else if(k1==k2){//平局 
		 	recordA[1]++;
		 	recordB[1]++;
		 }else{
		 	recordA[2]++; 
		 	recordB[0]++; 
		 	hand_recordB[k2]++; 
		 }
	}
	 //output the records of A and B
		 printf("%d %d %d\n",recordA[0],recordA[1],recordA[2]);
		 printf("%d %d %d\n",recordB[0],recordB[1],recordB[2]);
		 
		 int t1=0,t2=0;
		 for(int i=0;i<3;i++){
		 	if(hand_recordA[i]>hand_recordA[t1])
		 	{
		 		t1=i;
			 }
			 if(hand_recordB[i]>hand_recordB[t2])
		 	{
			 t2=i;
			 } 
		 }
		 printf("%c %c\n",sign[t1],sign[t2]); 
	return 0;
} 
