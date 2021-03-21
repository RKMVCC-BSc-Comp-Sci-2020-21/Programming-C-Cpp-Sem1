#include <stdio.h>
#include <conio.h>
int main()
{
	int one, two, multiply;
	printf ("enter first number");
	scanf ("%d", &one);
	printf ("enter second number");
	scanf ("%d", &two);
	multiply= one*two;
	printf ("the multiplication of numbers %d and %d is %d", one, two, multiply);
	getch();
}
