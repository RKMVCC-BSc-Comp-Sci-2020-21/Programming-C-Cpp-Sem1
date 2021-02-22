// Selection Sort.

#include <stdio.h>

int main()
{
    int size, i, j, arr[100], temp, min;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter the element of the array: \n ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted Array: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d , ", arr[i]);
    }
    return 0;
}
