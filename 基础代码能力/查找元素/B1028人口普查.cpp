#include<stdio.h>
	struct person{
		char name[11];
		int year,month,day;
	}old,young,left,right,test; 
	bool smallthan(person a,person b){//a的日期小于b的时候返回true 
		if(a.year!=b.year)return a.year<=b.year;
		else if(a.month!=b.month)return a.month<=b.month;
		else return a.day<=b.day; 
	}
	bool bigthan(person a,person b){//a的日期大于b的时候返回true 
		if(a.year!=b.year)return a.year>=b.year;
		else if(a.month!=b.month)return a.month>=b.month;
		else return a.day>=b.day; 
	}
	void init(){
	    old.year=right.year=2014;
	    young.year=left.year=1814;
        young.month=old.month=left.month=right.month=9;
        young.day=old.day=left.day=right.day=6;
	}
int main()
{
	int n,num=0;
	init();
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d/%d/%d",&test.name,&test.year,&test.month,&test.day);
		if(bigthan(test,left)&&smallthan(test,right)){//如果日期大于左边界且小于右边界的时候 合法 
			num++;
			if(smallthan(test,old)) old=test;
			if(bigthan(test,young)) young=test; 
		}
	}
	if(num==0) printf("0\n");
	else printf("%d %s %s\n",num,old.name,young.name);
  return 0;
  }

