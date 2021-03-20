#include <stdio.h>
int main ()
{
	int i,n,sum=0 ;
	printf ("Enter the length :\n");
	scanf ("%d",&n);
	i=1;
	while (i<=n)
	{
		sum=sum+i;
		i++;
		
	}
	printf ("The result is :%d",sum);
	return 0;
	
}
