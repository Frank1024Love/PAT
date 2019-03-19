#include<iostream>
using namespace std;
int main()
{
	int n,max=-1,min=101;
	string Female,Male;
	cin>>n;
	while(n--)
	{
	  string name,id,gender;
	  int score;
	  cin>>name>>gender>>id;
	  scanf("%d",&score);
	  if(gender=="M"){
	    if(min>score){
	      min=score;
	      Male=name+" "+id;
	    }
	  }else if(gender=="F")
	  {
	    if(max<score){
	    max=score;
	    Female=name+" "+id;
	  }
	  }
	}
	if(max!=-1) cout<<Female<<endl;
	else printf("Absent\n");
	if(min!=101) cout<<Male<<endl;
	else printf("Absent\n");
	if(max!=-1&&min!=101) printf("%d",max-min);//max min 的值搞反了
	else printf("NA");
	return 0;
}
