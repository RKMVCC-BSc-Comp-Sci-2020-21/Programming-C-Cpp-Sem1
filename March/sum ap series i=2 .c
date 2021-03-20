#include <stdio.h>
int main ()
{
	int i,n,sum=0;
	printf ("Enter the length :\n");
	scanf ("%d",&n);
	i=2;
	while (i<=n) 
	{
		sum=sum+i;
		i=i+2;
	
		
	}
	
	printf ("\n  The result is :%d",sum);
	return 0;
	
}
