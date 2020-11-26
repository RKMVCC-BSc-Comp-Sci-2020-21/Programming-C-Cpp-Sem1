#include <stdio.h>

void common(int a[], int b[])
{
    int c[10], count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
            {
                c[count] = a[i];
                count += 1;
            }
        }
    }

    printf("The common elements are: ");
    for (int i = 0; i < count; i++)
        printf("%d ", c[i]);
}

void unique(int a[], int b[])
{
    int u[20], flag = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        flag = 0;
        for (int j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
                flag = 1;
        }

        if (flag == 0)
        {

            u[count] = a[i];
            count++;
        }
    }
    flag = 0;
    for (int i = 0; i < 10; i++)
    {
        flag = 0;
        for (int j = 0; j < 10; j++)
        {
            if (b[i] == a[j])
                flag = 1;
        }

        if (flag == 0)
        {
            u[count] = b[i];
            count++;
        }
    }
    printf("\nThe distinct elements of two arrays: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", u[i]);
    }
}

int main()
{
    int a[10], b[10];

    printf("Enter the elements of first array: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter the elements of second array: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    common(a, b); //Call the common function
    unique(a, b); //Call the unique function
    return 0;
}