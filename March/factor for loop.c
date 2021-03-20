#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,n,count=0;
	printf ("\nEnter the number:");
	scanf ("%d",&n);
	printf ("All the factors of %d are \n:",n);
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		 {
		 	printf ("%d\n",i);
		 	count++;
		 }
		 
	}
	printf (" \nNumber of factors of %d is %d",n,count);
	getch ();
	return 0;
	
}
