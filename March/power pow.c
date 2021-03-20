#include <stdio.h>
#include <math.h>
int main ()
{
	int n,i,sum=0;
	printf ("Enter the length :");
	scanf ("%d",&n);
	i=1;
	while (i<=n)
	{
		sum=sum+pow(i,3);
	    i++;
	  
	    
		
	}
	printf ("The result is :%d",sum);
	return 0;
} 
//S=1^3+2^3+...+n^3  calculation of this series //
