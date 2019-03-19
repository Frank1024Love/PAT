#include<cstdio>
int main(){
	int counter[10]={0};//不赋值的话结果错误 
	int ans[10]={0};
	int n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		int a=t%5;
		switch(a){
			case 0:{
				if(t%2==0){
					ans[0]+=t;
					counter[0]++;
				}
			    
				break;
			}
			case 1:{
				if(counter[1]%2==0){
					ans[1]+=t;
				}else{
					ans[1]-=t;
				}
				counter[1]++;
				break;
			}
			case 2:{
				counter[2]++;
				break;
			}
			case 3:{
				counter[3]++;
				ans[3]+=t;
				break;
			}
			case 4:{
				if(ans[4]<t){
					ans[4]=t;
				}
				counter[4]++;
				break;
			}default:break;
		}
	}
	if(counter[0]==0) printf("N ");
	else printf("%d ",ans[0]);
	if(counter[1]==0) printf("N ");
	else printf("%d ",ans[1]);
	if(counter[2]==0) printf("N ");
	else printf("%d ",counter[2]);
	if(counter[3]==0) printf("N ");
	else printf("%.1f ",(double)ans[3]/counter[3]);
	if(counter[4]==0) printf("N ");
	else printf("%d",ans[4]);
	return 0;
} 
