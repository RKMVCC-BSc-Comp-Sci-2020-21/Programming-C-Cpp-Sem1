#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define N 1000
int main()
{

    int A[N][N], B[N][N], C[N][N], i, j, k, r1, c1, r2, c2;

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);
    srand(time(0));
    if (c1 != r2)
    {
        printf("Matrix multiplication is not defined for a %d*%d and %d*%d matrix \n\n", r1, c1, r2, c2);
    }
    else
    {

        //Elements insertion for first matrix
        for (i = 1; i <= r1; i++)
        {
            for (j = 1; j <= c1; j++)
            {
                A[i][j] = rand() % 40;
            }
        }

        //Elements insertion for second matrix
        for (i = 1; i <= r2; i++)
        {
            for (j = 1; j <= c2; j++)
            {
                B[i][j] = rand() % 20;
            }
        }

//Multiplication of two matrices
#pragma omp parallel
        {
#pragma omp parallel for collapse(2)
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