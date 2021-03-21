/*Program to find factorial of a number*/
#include<stdio.h>
long factorial(int n)
{
	long  r=1;
	int c;
	for(c=1;c<=n;c++)
	{
		r=r*c;
	}
	return r;
}
int main()
{
	long f;
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	f=factorial(n);
	printf("\nthe factorial is %ld",f);
	return 0;
}
