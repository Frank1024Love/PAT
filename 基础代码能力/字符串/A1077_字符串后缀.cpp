#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d\n",&n);//�˴���Ҫ���У���Ϊ��һ���ַ������յ�Ϊһ���� 
	string ans;
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);//��ȡһ�����ַ��������ո� 
		int lens=s.length();
		reverse(s.begin(),s.end());//��ת������ת��Ϊ�󼸸��ַ�����ͷ��ʼ������������� 
		if(i==0){//����һ���ַ���ֵ��ansʹans��ʼ�� 
			ans=s;
			continue;//��ɲ�Ҫ 
		}else{
			int lenans=ans.length();
			int minlen=min(lens,lenans);//ֻ��Ҫ������С���ַ����ĳ��ȼ��� 
			for(int j=0;j<minlen;j++){
				if(ans[j]!=s[j]){
					ans=ans.substr(0,j);//��������ͬ���ַ���ʱ��ͽ�ȡ�����µ�ans�� 
					break;
				}
			}
		}
	}
	reverse(ans.begin(),ans.end());
	if(ans.length()==0)ans="nai";
	cout<<ans;


}

