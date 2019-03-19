#include<cstdio>
#include<cstdlib> 
//1.使用指针指向此函数从而调用 
//void PrintMin(int a,int b)
//{
//	if(a<b)printf("%d",a);
//	else printf("%d",b);
//}

//2.
//int Pai(const void * elem1,const void * elem2)
//{
//	int *p1,*p2;
//	p1=(int *)elem1;
//	p2=(int *)elem2;
//	return(*p1%10)-(*p2%10);
// } 

int main(){
	//1.指针函数求最小值 
//	int x=4,y=5;
//	void (*p)(int ,int);
//	p=PrintMin;
//	p(x,y);

    //2.指针函数排序数组 
//    int a[]={123,215,124,321,322};
//    qsort(a,5,sizeof(int),Pai);//qsort c++快排标准库函数，Pai指向自定义的比较函数 
//    for(int *p=a;p<a+5;p++){
//    	printf("%d ",*p);
//	}
	return 0;
} 








