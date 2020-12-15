
#include <stdio.h>

int main()
{
    int digit;
    printf("Enter any digit: ");
    scanf("%d",&digit);
    
    switch(digit)
    {
        case 0:
            printf("You have entered ZERO");
            break;
        case 1:
            printf("You have entered ONE");
            break;
        case 2:
            printf("You have entered TWO");
            break;
        case 3:
            printf("You have entered THREE");
            break;
        case 4:
            printf("You have entered FOUR");
            break;
        case 5:
            printf("You have entered FIVE");
            break;
        case 6:
            printf("You have entered SIX");
            break;
        case 7:
            printf("You have entered SEVEN");
            break;
        case 8:
            printf("You have entered EIGHT");
            break;
        case 9:
            printf("You have entered NINE");
            break;
        case -1:
            printf("You have entered Minus ONE");
            break;
        case -2:
            printf("You have entered Minus TWO");
            break;
        case -3:
            printf("You have entered Minus THREE");
            break;
        case -4:
            printf("You have entered Minus FOUR");
            break;
        case -5:
            printf("You have entered Minus FIVE");
            break;
        case -6:
            printf("You have entered Minus SIX");
            break;
        case -7:
            printf("You have entered Minus SEVEN");
            break;
        case -8:
            printf("You have entered Minus EIGHT");
            break;
        case -9:
            printf("You have entered Minus NINE");
            break;
    }
    
    return 0;
}
