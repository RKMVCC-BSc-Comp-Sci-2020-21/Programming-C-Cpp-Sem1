#include<stdio.h>

void printMenu();
int sumFirst10Numbers(void);
void voidPointer(void);

int main()
{
	//printMenu();
	//printf("The sum of the first 10 numbers is %d.\n", sumFirst10Numbers());
	voidPointer();
	return 0;
}

void printMenu()
{
	printf("========== MENU ==========\n");
	printf("Input a number to take action:\n");
	printf("1. Input a number to calculate its factorial\n");
	printf("0. Exit\n");
	printf("========== MENU ==========\n");
	printf("Menu choice = ");
}

int sumFirst10Numbers(void)
{
	int sum = 0;
	int i;
	for(i = 1; i <= 10; ++i)
		sum += i;
	return sum;
}

void voidPointer(void)
{
	void *pointer;
	int number = 5;
	char symbol = 'a';
	int helper = 1;
	pointer = &number;

	//Uncomment the next to lines to test test see that the pointer could be used with a different type
	//helper = 2;			
	//pointer = &symbol;

	if(helper == 1)	// use an int pointer
		printf("The number is %d.\n", *(int *)pointer);
	else if(helper == 2)	// use a char pointer
		printf("The symbol is %c.\n", *(char *)pointer);
}