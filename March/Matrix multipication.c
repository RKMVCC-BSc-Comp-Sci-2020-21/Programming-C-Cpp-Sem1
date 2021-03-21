#include<stdio.h>
#include<math.h>
#define MAX 50


int main() {
	int a [MAX][MAX] ,b [MAX][MAX], product[MAX][MAX];
	int arows , acolumns , brows, bcolumns;
	int i,j,k;
	int sum = 0;
	
	
	//Part one ;
	printf("Enter the rows and columns of matrix a: ");
	scanf("%d %d", &arows, &acolumns);
	
	printf("Enter the eliments of matrix a:\n ");
	for(i=0 ;i<arows;i++)
	{
		for(j=0 ;j<acolumns ;j++ )
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	printf("Enter the rows and columns of the matrix b : ");
	scanf("%d %d", &brows, &bcolumns);
	
	if(brows != acolumns)
	{
		printf("Sorry! We cannot multiply the matrix a and b");
		
	}
	else
	{
		printf("Enter the elements of matrix b: \n");
		for (i=0; i<brows; i++)
		{
			for(j=0 ; j<bcolumns ; j++)
			{
				scanf("%d", &b[i][j]);				
			}
			
		}
	}
	printf("\n");
	
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			for(k=0; k<brows; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum=0;
		}
	}
	
	//Printing the arrays eliments
	printf("Resulting matrix\n ");
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			printf("%d ", product[i][j]);
		
		}
		printf("\n");
		
	}
	return 0;
}

