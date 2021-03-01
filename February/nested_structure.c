#include<stdio.h>

typedef struct{
	int d,m,y;
}date;

typedef struct
{
	char name[10];
	date dob;
	
}student;
//VARIABLE OF THE date STRUCTURE BECOMES THE MEMBER OF THE student STRUCTURE

int main()
{
	student s;
	
	printf("\n\tEnter your name : ");
	gets(s.name);
	fflush(stdin);
	
	printf("\n\tEnter your date of birth : ");
	printf("\n\tDD	: ");
	scanf("%d",&s.dob.d);
	fflush(stdin);
	
	printf("\n\tMM	: ");
	scanf("%d",&s.dob.m);
	fflush(stdin);
	
	printf("\n\tYYYY	: ");
	scanf("%d",&s.dob.y);
	fflush(stdin);
	
	printf("\n\tHello %s, you were born on %d-%d-%d .",s.name,s.dob.d,s.dob.m,s.dob.y);
	
	return 0;
	
}
