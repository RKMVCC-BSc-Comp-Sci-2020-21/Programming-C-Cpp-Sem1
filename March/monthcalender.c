//C Program to print one month's calender in proper format

#include <stdio.h>

int main()
{
	int i,days,start;

	label :
	printf("\n\tEnter the number of days :");
	scanf("%d",&days);

	if(days>=28 && days<=31)
	{
		printf("\n\tEnter the start day number 1-Sun, 2-Mon, ...  7-SAT : ");
		scanf("%d",&start);
	}
	else
	{
		printf("\n\tEntered wrong day input .");
		goto label;
	}

	if(start>=1 && start<=7)
	{
		printf("\nSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n");
		for(i=1;i<=days+start-1;i++)
		{
			if(i<start)
			{
			   printf(" \t");
			}
			else
			{
				printf("%d\t",i-start+1);
			}
			if(i%7==0)
				printf("\n");
		}

	}
	else
		printf("\n\tWrong input.");
  printf("\n\tBY Soubhagya Paul.");
	return 0;
}
