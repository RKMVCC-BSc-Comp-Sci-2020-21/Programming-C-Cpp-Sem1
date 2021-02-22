//  BUBBLE SORT.

#include <stdio.h>

int main()
{
    int n, i, j, arr[100], temp;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the %d element of the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
    return 0;
}
