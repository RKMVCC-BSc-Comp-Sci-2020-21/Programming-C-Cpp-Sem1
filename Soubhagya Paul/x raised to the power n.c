/*5.Write a C/C++ program using function that returns x raised to the power n, where n can be any integer.*/
#include<stdio.h>

int main()
{
	int x,n,sult;
	int power(int,int);
	
	printf("\n\tEnter a number : ");
	scanf("%d",&x);
	
	printf("\n\tEnter power : ");
	scanf("%d",&n);
	
	result=power(x,n);
	
	printf("\n\tThe result is : %d",result);
	
	return 0;	
}
int power(int x int n)
{
	int result=1;
	  for(;n>=1;n--)
		result= result* x;
		
		return result;
}
