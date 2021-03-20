#include<stdio.h>
int main()
{
    int a,b,c, great;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    great = a>b?(a>c?a:c):(b>c?b:c);
    printf("The greatest number among three is %d",great);
    return 0;
}