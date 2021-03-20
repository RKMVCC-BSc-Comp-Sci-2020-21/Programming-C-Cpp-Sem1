#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[2][2],row,col;
	printf("\nEnter the row of the Matrix");
	scanf("%d",&row);
	printf("\nEnter the coloumn of the Matrix");
	scanf("%d",&col);
	printf("\nEnter the eliment of the Matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe element of the Matrix are\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
	
}
