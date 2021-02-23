#include<stdio.h>
int main(int argc, char *argv[])
{
    int r,n,c = 0;
    printf("Enter digit = ");
    scanf("%d",&n);
    do{
        n/=10;
        c++;

    }while (n>0);

    printf("the number of digits = %d \n",c);


    return 0;
}
