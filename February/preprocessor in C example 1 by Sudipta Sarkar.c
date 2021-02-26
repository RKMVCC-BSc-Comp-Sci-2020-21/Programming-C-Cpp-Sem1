#include<stdio.h>
#define AREA(x)(3.14 * x*x)
int main()
{
    float r1 = 6.25,r2 = 2.5,a;

    a = AREA(r1);
    printf("Area of circle = %f \n",a);

    a = AREA(r2);
    printf("Area of circle = %f \n",a);
    return 0;

    return 0;
}
    */
/*
#include<stdio.h>
#define sq(n) n*n
int main()
{
    int j;
    j = (64 / sq(4));
    printf("\t %d\n",j);
    return 0;
}
