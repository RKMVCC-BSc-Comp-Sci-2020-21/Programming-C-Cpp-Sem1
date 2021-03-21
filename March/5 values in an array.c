//program to take 5 values the user and store them in an array
//print the elements stored in the array
#include <stdio.h>
int main ()
{
	int values [5];
	printf ("enter 5 integers:");
	for (int i=0; i<5; ++i)
	{
		scanf ("%d", &values[i]);
		
	}
	printf ("displaying integers:");
	for (int i=0;i<5;++i)
	{
		printf ("%d\n", values [i]);
	}
	return 0;
}

