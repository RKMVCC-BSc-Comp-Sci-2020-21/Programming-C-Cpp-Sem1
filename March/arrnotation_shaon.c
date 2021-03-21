/**
 * C program to input and print array elements using pointer in array notation
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        // &ptr[i] is equivalent to &arr[i]
        scanf("%d", &ptr[i]);   
    }

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // i[ptr] is equivalent to arr[i], i[arr] and ptr[i]
        // I have used i[ptr] syntax for knowledge. You can also use ptr[i]
        printf("%d, ", i[ptr]);
    }

    return 0;
}
