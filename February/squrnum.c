/*Write a C/C++ program using function that determines whether the given integer is a square number.*/

#include<stdio.h>
#include<math.h>


int main()
{

	int num;
	void sqr(int);
	printf("Enter an integer number: ");
	scanf("%d",&num);
	
	sqr(num);
	return 0;
}
void sqr(int num)
{
	int a;
	float b;
	b=sqrt((double)num);

	a=b;

	if(a==b)
		printf("\n\t%d is a perfect square.",num);
	else
		printf("\n\t%d is not a perfect square.",num);
	
}
