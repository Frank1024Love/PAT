#include<iostream>
#include<vector>
using namespace std;
int main(){
	//MyMythod
//	int n;//点数 
//	int m;//共m段路程 
//	int start,end;
//	int a,sum=0;
//	scanf("%d",&n);
//	int dis[n]={0};
//	for(int i=1;i<=n;i++)
//	{
//	   scanf("%d",&dis[i]);//录入第一个点到其他2-n-1各点的距离  
//	   	sum+=dis[i];
//	   if(i!=n){
//	   	   dis[i]+=dis[i-1];
//	   }
//	}
//	scanf("%d",&m);//输如路程个数
//	while(m--)
//	{
//		scanf("%d %d",&start,&end);
//		if(start>end)
//		{
//			swap(start,end); 
//		}
//		int distance=dis[end-1]-dis[start-1];
//		printf("%d\n",min(sum-distance,distance));
//	}
    //LIU's Method
    int n,m;
    scanf("%d",&n);
    vector<int> dis(n+1);//使用动态数组 
    int sum=0,start,end;
    for(int i=1;i<=n;i++)
	{
		int t;
		scanf("%d",&t);
		sum+=t;
		dis[i]=sum;    //存放每个点到第一个点的距离 
	 } 
	 scanf("%d",&m); 
    for(int i=0;i<m;i++)
    {
    	scanf("%d %d",&start,&end);
    	if(end<start)
    	{
    		swap(end,start);
		}
		int a=dis[end-1]-dis[start-1];
		printf("%d\n",min(sum-a,a));
	}
	return 0;
}
