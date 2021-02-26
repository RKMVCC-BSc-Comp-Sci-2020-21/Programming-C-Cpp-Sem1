#include<stdio.h>
int main()
{
    int n,s,d,j = 1,r,k = 0;
    printf("Enter the binary number = ");
    scanf("%d",&n);
    s = n;
    while (n>0) {
        r = n % 10;
        d = r*j;
        k +=d;
        j*=2;
        n/=10;

    }

    printf("The decimal = %d ",k);

    return 0;
}
