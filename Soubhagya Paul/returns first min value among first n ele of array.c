//6. Write a C/C++ program using function that returns the index of the first minimum value among the first n
//elements of the given array.

#include<stdio.h>
#define SIZE 10

int main(void)
{
	int arr[SIZE];
	int i, min, n;

	

	for(i = 0 ; i < SIZE ; i++)
	{
		printf("\n\tEnter into index %d : ", i);
		scanf("%d", &arr[i]);	
	}

	printf("\n\tEnter index number of position upto which you want to search : ");
	scanf("%d", &n);

	min = arr[0];

	for(i = 0 ; i <= n ; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}

	printf("\n\tThe minimum value upto %d index is : %d", n, min);

	return 0;
}
