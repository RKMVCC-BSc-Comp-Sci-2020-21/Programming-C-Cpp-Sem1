#include <stdio.h>

int main()
{
    
    int A[20][20], B[20][20], C[20][20], i, j, k, r1, c1, r2, c2;

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not defined for a %d*%d and %d*%d matrix \n\n", r1, c1, r2, c2);
    }
    else
    {

        printf("\nEnter the elements of first matrix: \n");
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter the elements of second matrix: \n");
        for (i = 1; i <= r2; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        //Multiplication of two matrices

        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                C[i][j] = 0;
                for (k = 1; k <= c1; k++)
                {
                    C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
                }
            }
        }

        //Display of result

        printf("\nThe result of multiplication is: \n \n");
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}