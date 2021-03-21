/*11. Write a C/C++ program using function counts the number of times the item x appears among the first n
elements of the array A and returns that count as the frequency of x in A.*/

#include<stdio.h>
#define SIZE 10

int main(void)
{
	int arr[SIZE];
	int i, x, n, count = 0;
	char found = 'F';

	

	for(i = 0 ; i < SIZE ; i++)
	{
		printf("\n\tEnter into index %d : ", i);
		scanf("%d", &arr[i]);	
	}

	printf("\n\tEnter the number you want to count frequency for  : ");
	scanf("%d", &x);

	printf("\n\tEnter how many index to search : ");
	scanf("%d", &n);

	if(n >= SIZE)
		printf("\n\tInvalid index.");
	else
	{
		for(i = 0 ; i <= n ; i++)
		{
			if(arr[i] == x)
			{
				found = 'T';
				count++;
			}
		}
	}
	if(found == 'F')
			printf("\n\tNot found.");
	else
		printf("\n\tThe number is found %d times.", count);
  printf("\n\n\n\tBy SOubhagya Paul.");
	return 0;
}
