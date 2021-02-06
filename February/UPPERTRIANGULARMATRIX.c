/*
UPPER TRIANGULAR MATRIX by SOUBHGAYA PAUL
*/

#include<stdio.h>
#define SIZE 3


int main()
{
	int arr[SIZE][SIZE];
	int r, c;


	for(r = 0 ; r < SIZE ; r++)
	{
		for(c = 0 ; c < SIZE ; c++)
			arr[r][c] = 0;
	}

	printf("\n\tEnter values into the diagonal matrix : ");

	for(r = 0 ; r < SIZE ; r++)
	{
		for(c = 0 ; c < SIZE ; c++)
		{
			if(r > c)
				continue;

			else
			{
				printf("\n\tEnter into row  %d and col  %d : ", r, c);
				scanf("%d", &arr[r][c]);
			}
		}
	}

	printf("\n\tYou have entered : ");

	for(r = 0 ; r < SIZE ; r++)
	{
		printf("\n\t\t");
		for(c = 0 ; c < SIZE ; c++)
			printf("\t%d", arr[r][c]);
	}

	return 0;
}
