#include <stdio.h>
int main ()
{
	int i,n,sum=0;
	printf ("Enter the length :");
	scanf ("%d",&n);
	i=1;
	while (i<=n)
	{
		sum=sum+i;
		
		i=i+2;
		
	}
	printf ("The result is :%d",sum);
	return 0;
}
