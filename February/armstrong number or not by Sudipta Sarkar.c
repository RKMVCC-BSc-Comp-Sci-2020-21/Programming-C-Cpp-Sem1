#include<stdio.h>
int main()
{
    int i,n,nd,r,s,m;
    s = 0;
    printf("enter the number of digits = ");
    scanf("%d",&nd);

    printf("enter the number = ");
    scanf("%d",&n);

    m = n;

    for(i=1;i<=nd;i++)
    {
        r = n%10;
        n =  n / 10;
        s = s + r*r*r;

    }

    if(m==s)
        printf("The given number is armstrong number\n");
    else
        printf("The given number is not armstrong number\n");
    return 0;
}
