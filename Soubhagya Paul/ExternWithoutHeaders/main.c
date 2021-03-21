#include <stdio.h>

int main()
{
	extern int callCount;
	printf("%d", callCount);
    return 0;
}
