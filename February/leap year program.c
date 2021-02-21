#include<stdio.h>

int main()
{
	int year;
	
	printf("Enter a year(<=1): ");
	scanf("%d",&year);
	
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		printf("LEAP YEAR");
	}
	else
	{
		printf("COMMON YEAR OR NOT LEAP YEAR");
	}
	
	return 0;	
	
}
