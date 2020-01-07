#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int school[100010]={0};
	while(n--){
		int a,b;
		cin>>a>>b;
		school[a]+=b;
	}
	int m=school[1],w=1;
	for(int i=2;i<100010;i++){
		if(m<school[i]){
			m=school[i];
			w=i;
		}
	}
	cout<<w<<" "<<m; 
    return 0;
}

