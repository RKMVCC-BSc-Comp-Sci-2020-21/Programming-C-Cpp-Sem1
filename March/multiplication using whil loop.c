#include <stdio.h>
int main ()
{
	int i,n,mult=1;
	printf ("Enter the length : \n");
	scanf ("%d",&n);
	i=1;  //inicialisation 
	while (i<=n) //checking 
	{
		mult=mult*i;
		i++;  //increment 
		
	}
	printf ("The results are :%d",mult);
	
	 
}
