#include<cstdio>
int main(){
	int a[100];
	int n,m;
	scanf("%d%d",&n,&m);
	m=m%n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-m;i<n;i++){
		printf("%d ",a[i]);
	} 
	for(int i=0;i<n-m;i++){
		if(i==(n-m-1)){
			printf("%d",a[i]);
		}else{
			printf("%d ",a[i]);
		} 
		
	}
	return 0;
}
