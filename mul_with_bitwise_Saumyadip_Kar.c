#include <stdio.h>

void main()
{
    long number, temp;

    printf("Enter an integer \n");
    scanf("%ld", &number);
    temp = number;

    number = number << 2;
    printf("%ld x 4 = %ld\n", temp, number);
}