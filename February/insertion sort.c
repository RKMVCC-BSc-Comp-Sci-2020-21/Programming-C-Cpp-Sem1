#include <stdio.h>

int main()
{
    int n, arr[100], i, j, temp;
    printf("Enter the size of the array \n");
    scanf("%d", &n);
    printf("Enter the element of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
    return 0;
}
