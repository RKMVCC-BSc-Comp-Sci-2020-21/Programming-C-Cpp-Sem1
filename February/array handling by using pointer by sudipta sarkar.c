#include<stdio.h>

int main()
{
    int arr[3][4];

    int i, j;

    printf("Enter the Elements of  this 3X4 Matrix - \n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
             scanf("%d",&arr[i][j]);
        }

    }


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
             printf("arr[%d][%d]=%d\n", (i+1), (j+1), *( *(arr + i) + j) );
        }
        printf("\n\n");
    }


    return 0;
}
