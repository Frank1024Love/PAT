#include<stdio.h>
struct Student{
  char name[11];
  char id[11];
  int score;
}student[1001],max,min;


int main()
{
	int n;
	char name[11],id[11];
	int score;
	scanf("%d",&n);
	max.score=0;
	min.score=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%s %s %d",&student[i].name,&student[i].id,&student[i].score);
		if(student[i].score>max.score) max=student[i];
		if(student[i].score<min.score) min=student[i];
	}
	printf("%s %s\n",max.name,max.id);
	printf("%s %s",min.name,min.id);
  return 0;
  }

