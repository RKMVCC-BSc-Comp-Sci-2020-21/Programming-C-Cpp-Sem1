//WAP to SWAP 2 numbers
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nenter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before swaping the numbers: a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf ("after swaping the numbers are: a=%d,b=%d\n",a,b);
    return 0;
}
