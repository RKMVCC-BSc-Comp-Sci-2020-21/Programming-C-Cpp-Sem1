/*Program to check determinent and invertion of a matrix*/
#include<stdio.h>
int main()
{   
    long dtrmnt;
	int a[3][3],i,j;
	printf("Enter the 3X3 matrix element:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	dtrmnt=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
	printf("\nThe determinent of the matrix\n");
	printf("%d",dtrmnt);
	if(dtrmnt==0)
	printf("\nThe Matrix is not invertible!!!");
	else
	printf("\nThe matrix has an inverse!!!");
	return 0;
}/*end of main*/
