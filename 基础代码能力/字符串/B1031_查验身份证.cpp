#include<iostream>
#include<string.h> 
using namespace std;
int main(){
	int n;
	bool flag=true;
	int weight[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char reflect[15]={"10X98765432"};
	char str[20];
	cin>>n;
	while(n--){
		cin>>str;
		int i,sum=0;
		for(i=0;i<17;i++){
			if(!(str[i]>='0'&&str[i]<='9')){//��������������ǾͲ��ж����һλ�ˣ�Ҳ������ͣ�ֱ������ 
				flag=false;
				cout<<str<<endl;
				break;
			}
				sum+=(str[i]-'0')*weight[i];
			} 
			if(i==17){
			  	if(reflect[sum%11]!=str[17]){//�������֣��ж����һλ 
				flag=false;
				cout<<str<<endl;
			}
			}
		
	}
		if(flag==true)
		cout<<"All passed"<<endl;
	return 0;
}
