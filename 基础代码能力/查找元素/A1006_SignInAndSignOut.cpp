#include<iostream>
#include<climits>//������С�������ı���ֵ����INI_MAX��Ϊint�����ֵ 
using namespace std; 
int main()
{
     string first,last,id;
     int max=INT_MIN,min=INT_MAX,n;//��ʼ�������Сֵ����Ҫ ��һ�����ֵ������С����Сֵ�����ܴ� 
	 int h1,h2,m1,m2,s1,s2;
	 int t1=0,t2=0;
	 cin>>n;
	 while(n--)
	 {
	 	cin>>id;
	 	scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	 	t1=h1*3600+m1*600+s1;
	 	t2=h2*3600+m2*600+s2;
	 	if(t1<min){
	 		min=t1;
	 		first=id;
		 }
		 if(t2>max)
		 {
		 	max=t2;
		 	last=id;
		 }
	 }
	 cout<<first<<" "<<last;  
  return 0;
}

