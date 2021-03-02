#include <stdio.h>

void incrementArray(int[]);

void main()

{

    int i;

    int array[4] = {4,3,2,1};

    incrementArray(array);

    for (i = 0; i < 4; i++)

        printf("%d\t", array[i]);
}

void incrementArray(int arr[])

{

    int i;

    for (i = 0; i < 4; i++)

        arr[i]++; 
}