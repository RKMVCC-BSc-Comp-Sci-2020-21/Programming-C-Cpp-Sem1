#include "header.h"

int num1 = 0;
static int num2 = 0;

int main()
{
	int myArray[5] = {1,2,3,4,5};
	printArray(myArray, 5);
	printf("num1 = %d\n", ++num1);
	printf("num2 = %d\n", ++num2);
	printVars();

	count();
	count();
	count();
	count();
}

static void count()
{
	static int callCount = 0;
	++callCount;
	printf("The function \"count\" was called %d %s.\n", callCount, callCount > 1 ? "times" : "time");
}

void printArray(int myArray[static 10], int size)
{
    int i;
    printf("[");
    for(i = 0; i < size; ++i)
            printf("%d, ", myArray[i]);
    printf("]\n");
}