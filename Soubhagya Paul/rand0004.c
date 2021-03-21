//4. Write a program in C/C++ to read any digit, display in the word.
#include<stdio.h>


int main()
{
	int n;
	printf("\n\tEnter the number : ");
	scanf("%d",&n);

	switch (n)
	{
	case 0 : printf("\n\tZero.");
				break;
	case 1 : printf("\n\tOne.");
				break;
	case 2 : printf("\n\tTwo.");
				break;
	case 3 : printf("\n\tThree.");
				break;
	case 4 : printf("\n\tFour.");
				break;
	case 5 : printf("\n\tFive.");
					break;
	case 6 : printf("\n\tSix.");
					break;
	case 7 : printf("\n\tSeven.");
					break;
	case 8 : printf("\n\tEight.");
					break;
	case 9 : printf("\n\tNine");
					break;
	default: printf("\n\tWrong input .");
	}

	return 0;
}
