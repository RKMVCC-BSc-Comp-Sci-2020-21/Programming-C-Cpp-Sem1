/*Program to find factorial using recursion*/
#include<stdio.h>
long int mulnum(int n);
int main()
{
	int n;
	printf("\nEnter a positive integer: ");
	scanf("%d",&n);
	printf("Factorial of %d= %ld",n,mulnum(n));
	return 0;
}
long int mulnum(int n){
	if(n>=1)
     	return n*mulnum(n-1);
	
	else
	   return 1;
}
