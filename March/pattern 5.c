#include <stdio.h>
int main ()

{
	int i,j,k=1,n;
	printf ("how many lines to print:");
	scanf ("%d", &n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf (" %4d ", k%2);
		k++;
		}
	printf ("\n");
	}
	
}
