#include <stdio.h>
int main()
{
    int num, rem, place = 1, oct = 0;

    printf("Enter any decimal number: ");
    scanf("%d", &num);

    //calculating the octal equivalent
    while (num != 0)
    {
        rem = num % 8;
        oct += rem * place;
        place *= 10;
        num /= 8;
    }

    //printing the octal number

    printf("The octal equivalent is: %d", oct);

    return 0;
}