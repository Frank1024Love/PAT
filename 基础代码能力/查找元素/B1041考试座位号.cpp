#include<stdio.h>
	 struct Student{
	 	long long id;
	 	int seat;
	 }student[1001];
int main()
{
            ��ά����ʵ�� 
//  int m,n;
//  int flag=1;
//  long long a[1001][3]={0};
//  long long id,test,seat;
//  scanf("%d",&n);//���뼸������
//  while(n--)
//  {
//    scanf("%lld %lld %lld",&id,&test,&seat);
//    for(int i=0;i<1001;i++)
//    {
//      if((a[test][0]!=0)||(a[test][1]!=0)) flag=0;;//���id����λ�Ų�Ϊ�գ���Ϊ�ظ���flagΪ0 
//    }
//    if(flag)//�ظ�����Ĳ��� 
//    {
//      a[test][0]=id;
//      a[test][1]=seat;
//    }
//  }
//  scanf("%d",&m);
//  while(m--)
//  {
//  	scanf("%lld",&test); 
//    printf("%lld %lld\n",a[test][0],a[test][1]);
//  }
           //�ṹʵ�֣�
	 int n,m,seat,test;
	 long long id;
	 scanf("%d",&n);
	 while(n--)
	 {
	 	scanf("%lld %d %d",&id,&test,&seat);
	 	student[test].id=id;
	 	student[test].seat=seat;
	 }
	 scanf("%d",&m);
	 while(m--)
	 {
	 	scanf("%d",&test);
	 	printf("%lld %d\n",student[test].id,student[test].seat);
	 }  
  return 0;
}
