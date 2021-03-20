#include <stdio.h>
int main()
{
	int n,p,count=0;
	printf ("Enter the number :");
	scanf ("%d",&n);
	p=n;
	while (p>0)
	{
		count++;
	    p=p/10;
	    
	}
	printf ("The digits in %d are :%d",n,count);
	return 0;
}

        	
              
