#include <stdio.h>

#include <stdlib.h>

int main()

{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int n;

    n = sizeof(array);

    printf("Size of the given array is %d\n", n / sizeof(int));

    return 0;
}