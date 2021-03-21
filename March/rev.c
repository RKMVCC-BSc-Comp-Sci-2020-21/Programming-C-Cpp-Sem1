#include <stdio.h>
int main ()
{
	int num,sum=0,rem;
	printf ("\n enter the value of num:");
	scanf ("%d", &num);
	while (num!=0)
	{
		rem= num%10;
		sum= sum*10+rem;
		num/=10;
	
	}
	printf ("reverse of the number is : %d", sum);
}
