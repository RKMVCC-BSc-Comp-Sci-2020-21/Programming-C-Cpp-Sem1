/* toupper.c */
// using library function to convert lower to upper case
#include <stdio.h>
#include <ctype.h>
int main()
{  printf("Enter a line of text: ");
   char c;
   while ((c = getchar()) != '\n')
	{   
	 putchar(toupper(c));
    }
	printf("\n");
	return 0;
}
