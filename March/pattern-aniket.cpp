/*Program to print a pattern*/
#include<stdio.h>
int main()
{
	int S,r,i,j,k;
	printf("Enter number of rows: ");
	scanf("%d",&r);
	for(i=1,k=0;i<=r;i++,k=0)
	{
		for(S=1;S<=r-1;S++)
		{
			printf(" ");
		}
		while(k!=2*i-1)
		{
			printf("* ");
			k++;
		}
		printf("\n");
	}
	return 0;
}
