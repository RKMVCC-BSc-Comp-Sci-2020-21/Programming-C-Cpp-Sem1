
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j;
    

    printf("Enter the number of ROWS and COLUM = \n");
    scanf("%d%d",&m,&n);

    int **q;    //
    q = (int**)malloc(m * sizeof (int));

    for(i=0;i<m;i++)
    {
       q[i] = (int*)malloc(n * sizeof (int));
    }


    printf("Enter the values--\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &q[i][j]);
        }
    }



    printf("The values are --\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d ",q[i][j]);
        }

        printf("\n");
    }

    printf("\n\n\n");

    return 0;
}
