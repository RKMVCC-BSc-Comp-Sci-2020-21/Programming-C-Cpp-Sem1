//Name:- Avirup Dutta ,Roll No:- 721
//Write a program to print an armstrong number
#include <stdio.h>
#include <math.h>

int main()
{
    int number, sum = 0, rem , temp;

    printf("enter a number:\n");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        rem = number % 10;
        sum = sum + (rem * rem * rem);
        number = number / 10;
    }
    if (sum == temp)
        printf("The given no is armstrong no");
    else
        printf("The given no is not a armstrong no");
    return 0;
}
