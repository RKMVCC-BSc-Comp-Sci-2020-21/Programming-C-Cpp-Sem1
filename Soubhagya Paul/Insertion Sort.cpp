10. Implement the Insertion Sort algorithm for sorting an array A of n elements.
#include<stdio.h>
#define MAX 5

void InsertionSortMethod(int a[])
{
	int k, temp, j;
	for(k = 1 ; k <= MAX-1 ; k++)
	{
		temp = a[k];
		j = k-1;
		while((temp < a[j]) && (j >= 0))
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
}

void main(void)
{
	int a[MAX];
	int i;
	clrscr();
	printf("\n\n\n\tEnter elements in the array in unsorted order : ");
	for(i = 0 ; i < MAX ; i++)
	{
		printf("\n\n\t\tElement %d : ", i+1);
		scanf("%d", &a[i]);
		fflush(stdin);
	}
	clrscr();
	printf("\n\n\n\n\tYou entered :\n\n\t\t\t");
	for(i = 0 ; i < MAX ; i++)
		printf("%d  ", a[i]);
	InsertionSortMethod(a);
	printf("\n\n\n\n\tSorted array is :\n\n\t\t\t");
	for(i = 0 ; i < MAX ; i++)
		printf("%d  ", a[i]);
	printf("\n\n\n\t\tBy Soubhagya Paul");
  return 0;
}
