//Matrix multiplying by SOUBHGAYA PAUL RKMVCC ROLL-732

#include<stdio.h>
#define MAX 10


int main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int i,j,k,temp;
	int m,n;		//ROW AND COLOUM FOR THE FIRST MATRIX
	int p,q;		//ROW AND COLOUM FOR THE SECOND MATRIX
	label :
	printf("\n\tEnter the number of rows for the first matrix : ");
	scanf("%d",&m);
	
	printf("\n\tEnter the coloum for the first matrix : ");
	scanf("%d",&n);
	
	printf("\n\tEnter the number of rows for the second matrix : ");
	scanf("%d",&p);
	
	printf("\n\tEnter the coloum for the second matrix : ");
	scanf("%d",&q);
	
	if(n!=p)
	{
		printf("\n\tThe coloum of first matrix and the row of second matrix is mismatch.");
		printf("\n\tProoduct is not feasible . Enter the correct value .\n\n");
		goto label;
	}
	else 
	{
		printf("\n\tEnter values into first matrix :");
		for(i=0;i<m;i++)
		{
			printf("\n\tRow index %d :",i);
			for(j=0;j<n;j++)
			{
				printf("\n\tcolum index %d : ",j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n\tEnter values into second matrix :");
		for(i=0;i<p;i++)
		{
			printf("\n\tRow index %d :",i);
			for(j=0;j<q;j++)
			{
				printf("\n\tcolum index %d : ",j);
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n\tYou have entered : ");
		printf("\n\tFirst matrix :");
		for(i=0;i<m;i++)
		{
			printf("\n\n\t\t");
			for(j=0;j<n;j++)
			{
				printf("\t%d",a[i][j]);		
			}
		}
		printf("\n\tsecond matrix :");
		for(i=0;i<p;i++)
		{
			printf("\n\n\t\t");
			for(j=0;j<q;j++)
			{
				printf("\t%d",b[i][j]);
			}
		}
		//THE RESULTENT MATRIX SHOULD HAVE m ROWS AND q COLOUMS
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				temp=0;
				for(k=0;k<n;k++)
					temp=temp+a[i][k]*b[k][j];
				c[i][j]=temp;
			}
		}
		printf("\n\tResultant matrix : ");
		for(i=0;i<m;i++)
		{
			printf("\n\n\t\t");
			for(j=0;j<q;j++)
			{
				printf("\t%d",c[i][j]);
			}
		}
	}
	return 0;
}
