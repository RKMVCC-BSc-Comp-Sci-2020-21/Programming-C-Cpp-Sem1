
#include <stdio.h>
int main ()
{
	int num,reversedN=0,rem,originalN;
	printf ("\n enter the value of num:");
	scanf ("%d", &num);
	originalN=num;
	while (num!=0)
	{
		rem= num%10;
		reversedN= reversedN*10+rem;
		num/=10;
	
	}
	if (originalN==reversedN)
	
		  printf ("%d is palindrome", originalN);
	      else
	       printf ("%d is not palindrome", originalN);
    return 0;		   	   
	
}
