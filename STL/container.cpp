#include<iostream>
#include<stack>
#include<queue> 
#include<vector> 
using namespace std;
int main()
{
	
////	***VECTOR***
	vector<string> v1(10,"a");//长度为10的字符数组初始值都设置为a 
	cout<<v1.size()<<endl;
	v1.push_back("a b c d e f");//添加到末尾 
	v1.push_back("1111");
	cout<<v1.size()<<endl;
	cout<<v1[10]<<" "<<v1[11]<<endl;
	
	vector<int> v2(9,1);
	cout<<v2.size()<<endl;
	v2.resize(10,100);            //重新设置长度的时候,若同时进行初始赋值操作，修改的只是新增的元素(长度增加） 
	cout<<v2.size()<<endl;
	cout<<"The first element is "<<v2[0]<<endl; 
	v2.push_back(1000);
	cout<<v2.size();
	cout<<"The first element is "<<v2[10]<<endl;
	for(auto t=v2.begin();t!=v2.end();t++){           //进行迭代遍历数组 
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
	cout<<s.size()<<endl;//栈的长度 
	int a=s.size(); 
	for(int i=0;i<a;i++) 
	{
		s.pop();	
	}
	cout<<"全部出栈,栈顶元素为："<<s.top()<<endl;


  return 0;
  }

