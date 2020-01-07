//一般不推荐使用qsort而推荐使用STL里的sort 操作上更加简单！！！ 
#include<cstdio>
#include<cstdlib>
#include<cstring>

//程序描述，定义一个学生结构体，包括姓名年龄，生日，其中生日也为结构体，按照年龄进行排序，并且要求使用指针函数 
struct Birthday{
	int year;
	int month;
	int day;
};
struct student{
	char name[10];
	int age;
	Birthday birthday;
}; 

//自定义排序规则的函数 
int PaixuByAge(const void *a,const void *b){  //void *的 
	Student* p1=(Student*)a;
	Student* p2=(Student*)b;
	return ((*p1).age)-(p2->age);//结构型指针使用其数据元素的两种方式 (*p1).age 或者 p2->age 
} 
int PaixuByName(const void *a,const void*b){
	Student *p1=(Student *)a;
	Student *p2=(Student *)b;
	return strcmp(p1->name,p2->name);
} 

int main(){
	Student st={"Frank",20,{1998,11,4}};
	Student student[5]={
	{ "FFF", 10, {1998,11,4} },
	{ "BBB", 40, {1997,11,5} },
	{ "DDD", 30, {1996,11,6} },
	{ "EEE", 20, {1995,11,7} },
	{ "CCC", 50, {1994,11,8} }
	};
	printf("未排序：\n"); 
	for(Student *p=student;p<student+5;p++)
	{//指向结构变量的指针   //指针访问结构体数据的两种方式 
	printf("%s's age is %d,and his birthday is %d-%d-%d\n",p->name,(*p).age,p->bir.year,(*p).bir.month,p->bir.day);
	} 
	printf("按年龄排序：\n"); 
	qsort(student,5,sizeof(Student),PaixuByAge);
	for(Student *p=student;p<student+5;p++)
	{
	printf("%s's age is %d,and his birthday is %d-%d-%d\n",p->name,(*p).age,p->bir.year,(*p).bir.month,p->bir.day);
	}
	printf("按姓名排序：\n"); 
	qsort(student,5,sizeof(Student),PaixuByName);
	for(Student *p=student;p<student+5;p++)
	{
	printf("%s's age is %d,and his birthday is %d-%d-%d\n",p->name,(*p).age,p->bir.year,(*p).bir.month,p->bir.day);
	}
}
