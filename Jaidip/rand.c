#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3


int main()
{
    int A[ROW][COL], B[ROW][COL],C[ROW][COL];
    srand(time(0));
    
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            A[i][j]= rand() %20;
        }
    }
   

    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            B[i][j]= rand() %50;
        }
    }

    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            C[i][j]= A[i][j]+B[i][j];
        }
    }

    //Display

    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}