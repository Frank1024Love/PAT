#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d\n",&n);//此处需要换行，因为下一个字符串接收的为一整行 
	string ans;
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);//获取一整行字符，包括空格 
		int lens=s.length();
		reverse(s.begin(),s.end());//翻转后问题转换为求几个字符串从头开始连续的最长公共串 
		if(i==0){//将第一个字符赋值给ans使ans初始化 
			ans=s;
			continue;//大可不要 
		}else{
			int lenans=ans.length();
			int minlen=min(lens,lenans);//只需要遍历最小的字符串的长度即可 
			for(int j=0;j<minlen;j++){
				if(ans[j]!=s[j]){
					ans=ans.substr(0,j);//遇到不相同的字符得时候就截取，更新到ans中 
					break;
				}
			}
		}
	}
	reverse(ans.begin(),ans.end());
	if(ans.length()==0)ans="nai";
	cout<<ans;


}

