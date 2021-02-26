#include<stdio.h>
void swap(int *, int *);

int main()
{                                           // call by reference
    int a,b;

    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);

    swap(&a,&b);

    printf("After the swaping a = %d \t b = %d \n\n",a,b);


    return 0;
}
void swap(int *x, int *y)
{
    int t;
     t = *x;
     *x = *y;
     *y = t;
}
