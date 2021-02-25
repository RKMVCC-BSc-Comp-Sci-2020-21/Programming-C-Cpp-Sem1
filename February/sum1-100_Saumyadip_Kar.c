#include <stdio.h>

void main()
{
    int num, sum = 0;

    for (num = 1; num <= 100; num++)
    {
        sum = sum + num;
    }
    printf("Sum = %4d\n", sum);
}