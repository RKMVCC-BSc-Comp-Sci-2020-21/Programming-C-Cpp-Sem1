//  C program to check whether a given number is positive or negative.
#include<stdio.h>

int main()
{
	float n;
	printf("\n\tEnter a number: ");
	scanf("%f",&n);

	if(n<=0)
	{
		if(n==0)
		printf("\n\tYou entered zero.");
		else
printf("\n\tYou entered a negative number . ");
	}
	else
	printf("\n\tYou entered a positive number . ");
	return 0;
}
