/*Program to find factors of a number*/
#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("Factors of the number are: ");
    for(i=2;i<a;i++)
    {
    	if(a%i==0)
    	{
    		printf("\t%d",i);
		}
	}
	return 0;
}
