#include <stdio.h>
int main()
{
	int num,originalN,result=0,rem;
	printf ("\n enter three digit integer:");
	scanf ("%d", &num);
    originalN=num;
	while (originalN!=0)
	{
		rem= originalN%10;
		result+=rem*rem*rem;
		originalN/=10;
	}
	if (result==num)
	printf ("%d is an armstrong number", num);
	else 
	printf ("%d is not an armstrong number", num);
	
	
}
