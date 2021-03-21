#include<stdio.h>

int sumDigits();
void printIfFound(int array[], int size, int value);
int linearSearch(int array[], int size, int value);

int main()
{
	int array[10];
	int i;
	int sum = sumDigits();
	int searchIndex;
	for(i = 0; i < 10; ++i)
		array[i] = i;
	printIfFound(array, 10, 5);
	searchIndex = linearSearch(array, 10, 5);
	printf("%d\n", searchIndex);
	printf("%d\n", sum);

	return 0;
}

int sumDigits()
{
	int sum = 0;
	int digit;
	for(digit = 0; digit <= 9; ++digit)
	{
		sum += digit;
	}
	return sum;
}

void printIfFound(int array[], int size, int value)
{
	int found = -1;
	int i;
	for(i = 0; i < size; ++i)
	{
		if(array[i] == value)
		{
			found = i;
			break;
		}
	}
	if(found != -1)
		printf("The value %d was found in index %d\n", value, found);
	else
		printf("The value %d was not found.\n", value);
}

int linearSearch(int array[], int size, int value)
{
	int result;
	int i;
	for(i = 0; i < size; ++i)
	{
		if(array[i] == value)
		{
			result = i;
			break;
		}
	}
	return result;
}