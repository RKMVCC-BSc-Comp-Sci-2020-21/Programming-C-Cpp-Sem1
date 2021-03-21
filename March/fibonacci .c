#include <stdio.h>
int main ()
{
	int i, n, a=0, b=1,s;
	printf ("\n enter the value of n:");
	scanf ("%d", &n);
	printf ("\n fibonacci series....\n");
	printf ("%d,%d,",a,b );
	for (i=3;i<=n;i++)
	{
		s=a+b;
		printf ("%d,",s);
		a=b;
		b=s;
	}
	
}
