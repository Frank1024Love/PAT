#include<iostream>
#include<stack>
#include<queue> 
#include<vector> 
using namespace std;
int main()
{
	
////	***VECTOR***
	vector<string> v1(10,"a");//����Ϊ10���ַ������ʼֵ������Ϊa 
	cout<<v1.size()<<endl;
	v1.push_back("a b c d e f");//��ӵ�ĩβ 
	v1.push_back("1111");
	cout<<v1.size()<<endl;
	cout<<v1[10]<<" "<<v1[11]<<endl;
	
	vector<int> v2(9,1);
	cout<<v2.size()<<endl;
	v2.resize(10,100);            //�������ó��ȵ�ʱ��,��ͬʱ���г�ʼ��ֵ�������޸ĵ�ֻ��������Ԫ��(�������ӣ� 
	cout<<v2.size()<<endl;
	cout<<"The first element is "<<v2[0]<<endl; 
	v2.push_back(1000);
	cout<<v2.size();
	cout<<"The first element is "<<v2[10]<<endl;
	for(auto t=v2.begin();t!=v2.end();t++){           //���е����������� 
		cout<<*t<<endl;
	} 
	
//	***STACK & QUEUE*** 
	stack<int> s; 
    queue<int> q;
	for(int i=0;i<10;i++)
	{
		s.push(i);
		q.push(i);
	}
	cout<<q.front()<<"  "<<q.back();
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;//ջ�ĳ��� 
	int a=s.size(); 
	for(int i=0;i<a;i++) 
	{
		s.pop();	
	}
	cout<<"ȫ����ջ,ջ��Ԫ��Ϊ��"<<s.top()<<endl;


  return 0;
  }

