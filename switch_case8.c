#include <stdio.h>
int main()
{
	int ch = 'a' +'b' ;
	switch (ch)
	{
		case 'b' + 'a' :
		printf("\n You entered a and b");
		case 'a':
		case 'b':
		printf("\n entered b") ;
		case 'A':
		printf("\n Entered A");
		
	}
}
