#include <stdio.h>
int main()
{
	int k,j=2;
	switch (k=j+1)
	{
		case 0 :
		printf("\n case 0");
		case 1:
		printf("\n case 1");
		case 2:
		printf("\n case 2");
		default:
		printf("\n Inside default!!!");
	}
}
