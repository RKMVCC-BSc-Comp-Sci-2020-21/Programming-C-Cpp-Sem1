#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
	int i,n,arr[100];
	printf ("Enter the length of the array <=100\n");
	scanf ("%d",&n);
	if (n>100)
	{
	printf ("wrong length entered \n");
	exit (1);
    }
    printf ("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
    	scanf ("%d",&arr[i]);
    	
	}
	printf ("The given elements of the array are :\n");
	for (i=0;i<n;i++)
       printf ("%d  ",arr[i]);
    return 0;
    
	
}
