// Write a C/C++ program to check whether a given number is even or odd.
#include<stdio.h>

int main()
{
int a;
	printf("\n\tEnter the number : ");
	scanf("%d",&a);
	if(a%2==0)
	printf("\n\tYou entered an even number.");
	else
	printf("\n\tYou entered an odd number .");
	return 0;
}
