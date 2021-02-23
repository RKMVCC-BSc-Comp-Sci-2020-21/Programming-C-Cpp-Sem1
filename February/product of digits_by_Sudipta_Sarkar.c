#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,p=1,r;
    printf("Enter the number = ");
    scanf("%d",&n);

    while (0<n) {

        r = n % 10;
        p*=r;
        n/=10;
    }

    printf("Enter the product is = %d \n",p);

    return 0;
}
