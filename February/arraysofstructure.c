//ARRAYS OF STRUCTURE

#include<stdio.h>
typedef struct{
	int roll;
	char name[10];
	float avg;
}student;

int main()
{
	student s[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter roll : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		
		printf("\n\tEnter name : ");
		scanf("%s",&s[i].name);
		fflush(stdin);
		
		printf("\n\tEnter avg : ");
		scanf("%f",&s[i].avg);
		fflush(stdin);
	}
	printf("\n\tYou have entered : ");
	for(i=0;i<3;i++)
	{
		printf("\n\tRoll : %d",s[i].roll);
		printf("\n\tName : %d",s[i].name);
		printf("\n\tAvg : %d",s[i].avg);
	}
	return 0;
}
