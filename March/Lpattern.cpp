/*Program to print a L pattern*/
#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=3*n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=1;k<=n;k++)
	{
		for(l=1;l<=4*n;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
