#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    int largest= a>b?(a>c?a:c):(b>c?b:c); //finding largest among three using ternary operator
    printf("Largest among three numbers is %d",largest);
    return 0;
}