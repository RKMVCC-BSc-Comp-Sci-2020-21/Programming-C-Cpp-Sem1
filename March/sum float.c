#include <stdio.h>
int main ()
{
	int i,n;
	float sum=0;
	printf ("Enter the length :\n"); 
	scanf ("%d",&n);
	i=1;
	while (i<=n)
	{
	
	     
	      sum=sum+1.0/i;
	      i++;
	      
	      
	  }
	  printf ("\n The result is :%f",sum);
	  return 0;
}

//s=1/1+1/2+...+1/n calculation of this series.//
