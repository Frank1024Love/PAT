//һ�㲻�Ƽ�ʹ��qsort���Ƽ�ʹ��STL���sort �����ϸ��Ӽ򵥣����� 
#include<cstdio>
#include<cstdlib>
#include<cstring>

//��������������һ��ѧ���ṹ�壬�����������䣬���գ���������ҲΪ�ṹ�壬��������������򣬲���Ҫ��ʹ��ָ�뺯�� 
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

//�Զ����������ĺ��� 
int PaixuByAge(const void *a,const void *b){  //void *�� 
	Student* p1=(Student*)a;
	Student* p2=(Student*)b;
	return ((*p1).age)-(p2->age);//�ṹ��ָ��ʹ��������Ԫ�ص����ַ�ʽ (*p1).age ���� p2->age 
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
	printf("δ����\n"); 
	for(Student *p=student;p<student+5;p++)
	{//ָ��ṹ������ָ��   //ָ����ʽṹ�����ݵ����ַ�ʽ 
	printf("%s's age is %d,and his birthday is %d-%d-%d\n",p->name,(*p).age,p->bir.year,(*p).bir.month,p->bir.day);
	} 
	printf("����������\n"); 
	qsort(student,5,sizeof(Student),PaixuByAge);
	for(Student *p=student;p<student+5;p++)
	{
	printf("%s's age is %d,and his birthday is %d-%d-%d\n",p->name,(*p).age,p->bir.year,(*p).bir.month,p->bir.day);
	}
	printf("����������\n"); 
	qsort(student,5,sizeof(Student),PaixuByName);
	for(Student *p=student;p<student+5;p++)
	{
	printf("%s's age is %d,and his birthday is %d-%d-%d\n",p->name,(*p).age,p->bir.year,(*p).bir.month,p->bir.day);
	}
}
