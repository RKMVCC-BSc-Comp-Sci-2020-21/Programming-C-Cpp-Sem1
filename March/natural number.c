#include <stdio.h>
int main ()
{
	int i,n ;
	printf ("Enter the length :");
	scanf ("%d",&n);
	i=1;   //loop counter inicialisation 
	printf ("The first %d natural numbers are :\n ",n);
	while (i<=n) //checking 
	{
		printf ("  %d  ",i);
		i++;  //increment 
		
	}
	
	return 0;
	
} 
