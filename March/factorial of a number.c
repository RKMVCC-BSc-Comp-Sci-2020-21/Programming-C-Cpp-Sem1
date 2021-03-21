#include <stdio.h>
int main ()
{
	int i,n,f=1;
	printf ("\n enter the value of n:");
	scanf ("%d", &n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf ("the factorial=%d", f);
}
