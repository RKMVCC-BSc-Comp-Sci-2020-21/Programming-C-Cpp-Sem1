#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("How many fibonacci numbers you wish to create = ");
    scanf("%d",&x);
    a = 0;
    b = 1;
    d= 3;

    printf("%d %d",a,b);
    while (d<=x) {

        c = a + b;
        printf("%d",c);
        a = b;
        b = c;
        d = d+1;

    }
    return 0;
}
