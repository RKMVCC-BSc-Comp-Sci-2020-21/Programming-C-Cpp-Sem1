/*Write a C/C++ program using function that returns x raised to the power n, where n can be any integer.*/
#include<stdio.h>

int main()
{
	int n,p,result;
	int power(int,int);
	
	printf("\n\tEnter a number : ");
	scanf("%d",&n);
	
	printf("\n\tEnter power : ");
	scanf("%d",&p);
	
	result=power(n,p);
	
	printf("\n\tThe result is : %d",result);
	
	return 0;	
}
int power(int n, int p)
{
	int result=1;
	for(;p>=1;p--)
		result= result* n;
		
		return result;
}
