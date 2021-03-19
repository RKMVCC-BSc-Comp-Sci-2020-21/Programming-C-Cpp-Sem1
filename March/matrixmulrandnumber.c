//matrix addition by random number 

#include<stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3


int main()
{
	int arr1[ROW] [COL],arr2[ROW] [COL],arr3[ROW] [COL];
	int r,c;
	for(r = 0 ; r < ROW ; r++)
	{
		for(c = 0 ; c < COL ; c++)
			arr1[r][c] = rand();
	}
	printf("\n\tFirst matrix : ");

	for(r = 0 ; r < ROW ; r++)
	{
		printf("\n\t");
		for(c = 0 ; c < COL ; c++)
			printf("\t%d", arr1[r][c]);
	}
	
	printf("\n\n\t second matrix : ");
	for(r = 0 ; r < ROW ; r++)
	{
		for(c = 0 ; c < COL ; c++)
			arr2[r][c] = rand();
	}

	for(r = 0 ; r < ROW ; r++)
	{
		printf("\n\t");
		for(c = 0 ; c < COL ; c++)
			printf("\t%d", arr2[r][c]);
	}
	
	for(r=0;r<ROW;r++)
	{
		for(c=0;c<COL;c++)
			arr3[r][c]=arr1[r][c]+arr2[r][c];
	}
	
	
	printf("\n\tSum of the matrices : ");
	for(r=0;r<ROW;r++)
	{
		printf("\n\t");
		for(c=0;c<COL;c++)
			printf("\t%d",arr3[r][c]);
	}
	return 0;
}
