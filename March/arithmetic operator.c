#include <stdio.h>
int main ()
{
	int a, b;
	float s;
	printf ("\nEnter the value for a:");
	scanf ("%d", &a);
	printf ("\nEnter the value for b:");
	scanf ("%d", &b);
	s=(float)a/b;
	printf ("\nThe result is=%3.2f",s);
	return (0); 
	}
