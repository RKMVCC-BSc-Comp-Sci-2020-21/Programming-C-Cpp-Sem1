#include<stdio.h>


void sum(int p,int q)
{
    int s= p-q;
    printf("The sub is %d",s);
}
void mul(int p,int q)
{
    int m=p*q;
    printf("\nThe product of two numbers is %d",m);
}

int main()
{
    int a,b,s;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);

    sum(a,b);
    
    mul(20,30);

    return 0;
}