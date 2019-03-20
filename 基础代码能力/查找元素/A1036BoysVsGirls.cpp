#include<iostream>
using namespace std;
int main()
{
  int n,min=101,max=-1;//初始量的选择，最小值赋值最大的量，最大值赋值最小的量，方便后续的操作 
	string name,gender,id;//使用string类型更加方便 
	string Female,Male;
	int score;
	cin>>n;
	while(n--)
	{
		cin>>name>>gender>>id>>score;
		if(gender=="F"){
			if(score>max)
			{
				max=score;
				Female=name+" "+id;
			}
		}else if(gender=="M")
		{
			if(score<min)
			{
				min=score;
				Male=name+" "+id;
			}
		}
	 } 
	 if(max!=-1) cout<<Female<<endl;
	 else cout<<"Absent"<<endl;
	 if(min!=101)cout<<Male<<endl;
	 else cout<<"Absent"<<endl;
	 if(max!=-1&&min!=101)cout<<max-min;
	 else cout<<"NA";
	return 0;
}
