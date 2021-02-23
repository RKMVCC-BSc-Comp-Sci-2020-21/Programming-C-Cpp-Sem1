#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number =  ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("\t The number is even\n");
    }

    else
    {
        printf("\t The number is odd\n");
    }

    return 0;
}
