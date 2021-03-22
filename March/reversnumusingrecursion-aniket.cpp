/*Program to reverse a number using recursion*/
#include<stdio.h>
int revfunc(int num);
int main()
{
	int num,revnum;
	printf("\nEnter number: ");
	scanf("%d",&num);
	revnum=revfunc(num);
	printf("\nAfter reverse the no is : %d",revnum);
	return 0;
}
int sum=0,rem;
int revfunc(int num)
{
	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		revfunc(num/10);
	}
	else
	 return sum;
	 
	return sum;
}
