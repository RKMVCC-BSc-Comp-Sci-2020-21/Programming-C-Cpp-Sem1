#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter the values of A and B:\n");
	scanf("%d%d", &a,&b);
	printf("\n you have entered:\nA = %d\n", a, b);
	
	c = a;
	a = b;
	b = c;
	printf("\n swapped values are:\n A = %d and B = %d\n", a, b);
	
	return 0;
}
