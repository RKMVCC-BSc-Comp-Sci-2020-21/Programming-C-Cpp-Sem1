// program in C to make of a 3*3 matrix
#include <stdio.h>
int main()
{
	int a[3][3],i,j,deter=0;
	printf("Enter Matrix Eliment ....\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter number in pocket[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Matrix is .......\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
