//S=1-2+3-4+5-...+n calculation of this series //
#include <stdio.h>
#include <math.h>
int main ()
{
	int i,n,sum=0;
	printf ("Enter the length :");
	scanf ("%d",&n);
	i=1;
	while (i<=n)
            { sum=sum+i*pow(-1,i+1);
            i++;
            
	}
	printf ("The result is :%d",sum);
	return 0;
	
		
}
