9. Write a C/C++ program using function that removes an item from an array.

#include<stdio.h>
#define SIZE 10

int main(void)
{
	int arr[SIZE];
	int i, j, s, n;
	char found = 'F';

	

	for(i = 0 ; i < SIZE ; i++)
	{
		printf("\n\tEnter into index %d : ", i);
		scanf("%d", &arr[i]);	
	}

	printf("\n\tEnter the number you want to remove  : ");
	scanf("%d", &n);

	s = SIZE;

	for(i = 0 ; i < SIZE ; i++)
	{
		if(arr[i] == n)
		{
			found = 'T';
			for(j = i ; j < SIZE-1 ; j++)
				arr[j] = arr[j+1];
			s--;
		}
	}

	if(found == 'F')
		printf("\n\tNot found.");
	else
	{
		printf("\n\tAfter removal the array looks like : ");
		for(i = 0 ; i < s ; i++)
			printf("\t%d", arr[i]);
	}
  printf("\n\n\n\t\tBy soubhagya Paul.");
	return 0;
}
