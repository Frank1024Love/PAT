#include<cstdio>

void swap1(int *p1,int *p2){
	int t=* p1;
	*p1=*p2;
	*p2=t;
}
void swap2(int a,int b){
	int t=a;
	a=b;
	b=t;
}
void swap3(int *p1,int *p2)
{
	int x;
	int *t=&x;
	*t=*p1;
	*p1=*p2;
	*p2=*t;
 } 
 void swap4(int * &p1,int * &p2)
 {
 	int *t=p1;
 	p1=p2;
 	p2=t;
  } 
int main(){
	//利用指针枚举数组
//	int a[10]={2,1,4,5,6,3,2,1,2,1};
//	for(int *p=a;p<a+10;p++){
//		printf("%d",*p);
//	}

    //值传递&地址传递 
//	int a=100;
//	int b=200;
//	swap2(a,b);
//	printf("%d %d\n",a,b);
//	swap3(&a,&b);
//	printf("%d %d",a,b);

    //引用--换名
//    int a=100;
//	int b=200;
//    int *p1=&a;
//    int *p2=&b;
//	 swap4(p1,p2);
//	 printf("%d %d",*p1,*p2);

	 
} 
