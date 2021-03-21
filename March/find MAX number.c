#include <stdio.h>
int main ()
{
	int a,b;
	printf ("enter the value of a:");
	scanf ("%d", &a);
	printf ("enter the value of b:");
	scanf ("%d", &b);
	if (a!=b)
	{
		if (a>b)
		{
			printf ("%d is maximum, a");
			
		}
		else 
		if (a<b)
		{
			printf ("%d is maximum",b);
			
		}
	}
	 else 
	 
	 
	 printf ("they are equal");
}
