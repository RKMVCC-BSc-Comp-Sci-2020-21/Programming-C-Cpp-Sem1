#include<stdio.h>

int main()
{
	int side1,side2,side3;
	
	printf("Enter three sides of a triangle: ");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	if((side1+side2)>side3)
	{
		if((side1+side3)>side2)
		{
			if((side2+side3)>side1)
			{
				printf("The triangle is valid.");
			}
			else
			{
				printf("The triangle is not valid.");
			}
		}
		else
		{
			printf("The triangle is not valid.");
		}
	}
	else
	{
		printf("The triangle is not valid.");
	}
	
	
return 0;
	
}
