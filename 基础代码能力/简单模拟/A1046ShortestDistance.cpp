#include<iostream>
#include<vector>
using namespace std;
int main(){
	//MyMythod
//	int n;//���� 
//	int m;//��m��·�� 
//	int start,end;
//	int a,sum=0;
//	scanf("%d",&n);
//	int dis[n]={0};
//	for(int i=1;i<=n;i++)
//	{
//	   scanf("%d",&dis[i]);//¼���һ���㵽����2-n-1����ľ���  
//	   	sum+=dis[i];
//	   if(i!=n){
//	   	   dis[i]+=dis[i-1];
//	   }
//	}
//	scanf("%d",&m);//����·�̸���
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
    vector<int> dis(n+1);//ʹ�ö�̬���� 
    int sum=0,start,end;
    for(int i=1;i<=n;i++)
	{
		int t;
		scanf("%d",&t);
		sum+=t;
		dis[i]=sum;    //���ÿ���㵽��һ����ľ��� 
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
