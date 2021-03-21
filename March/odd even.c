#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number ");
	scanf("%d", &a);
	
	if (a>=0)
		printf("a is positive\n");                         
	else 
		printf("a is negative\n");
	
	return 0;	
}
