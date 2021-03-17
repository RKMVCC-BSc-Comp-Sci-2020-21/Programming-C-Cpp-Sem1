// Write a program to input an Array and remove all duplicates numbers from the array.

#include<stdio.h>

main()

{
    int a[20], i, j, k, n;
    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("\nEnter %d array element: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nNew array is: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
