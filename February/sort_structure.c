//SORTING OF ARRAY OF STRUCTURE

#include<stdio.h>
typedef struct{
	int roll;
	char name[10];
	int marks;
}student;

int main()
{
	int i,j;
	student s[3];
	student temp;
	
	fflush(stdin);
	
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter roll : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		
		printf("\n\tEnter name : ");
		gets(s[i].name);
		fflush(stdin);
		
		printf("\n\tEnter marks : ");
		scanf("%d",&s[i].marks);
		fflush(stdin);
		
	}
	
	for(i=0; i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i].marks < s[j].marks)
			{
				temp =s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\n\tSorted merit list : ");
	for(i=0; i<3;i++)
	{
		printf("\n\tRoll : %d", s[i].roll);
		printf("\n\tName : %s",s[i].name);
		printf("\n\tMarks : %d",s[i].marks);
	}
	return 0;
}
