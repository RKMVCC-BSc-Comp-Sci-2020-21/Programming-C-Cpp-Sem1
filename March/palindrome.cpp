/*Program to check palindrome*/
#include<stdio.h>
int main()
{
	int a,org,reverse=0,remainder;
	printf("Enter a number: ");
	scanf("%d",&a);
	org=a;
	while(a!=0)
	{
		remainder=a%10;
		reverse=reverse*10+remainder;
		a/=10;
	}
	if(org==reverse)
	{
		printf("\n%d is a palindrome",org);
	}
	else
	 printf("\n%d is not a palindrome",org);
	 
	return 0;
}
