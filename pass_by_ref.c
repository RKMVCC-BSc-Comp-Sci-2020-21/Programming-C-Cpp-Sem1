#include <stdio.h>

void cube(int *x);

int main()

{

    int num = 10;

    cube(&num);

    printf("the cube of the given number is %d", num);

    return 0;
}

void cube(int *x)

{

    *x = (*x) * (*x) * (*x);
}