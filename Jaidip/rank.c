#include <stdio.h>

int main()
{
    int i, j, n = 2, det, matrix[2][2];
    printf("Enter your entries for the input matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    det = (matrix[0][0] * matrix[1][1]) -
          (matrix[0][1] * matrix[1][0]);
    if (det)
    {
        printf("Rank of the given matrix is 2\n");
    }
    else
    {
        printf("Rank of the given matrix is 1\n");
    }
    return 0;
}