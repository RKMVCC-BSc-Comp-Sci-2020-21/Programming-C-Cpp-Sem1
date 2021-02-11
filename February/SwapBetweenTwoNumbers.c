//sayankp

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    printf("Result 1: %d", a);
    printf("Result 2: %d", b);

    return 0;

}
