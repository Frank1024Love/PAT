#include<iostream>
using namespace std;
int main()
{
  int n,min=101,max=-1;//��ʼ����ѡ����Сֵ��ֵ�����������ֵ��ֵ��С��������������Ĳ��� 
	string name,gender,id;//ʹ��string���͸��ӷ��� 
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
