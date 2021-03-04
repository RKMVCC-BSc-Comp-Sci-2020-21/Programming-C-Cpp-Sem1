#include<stdio.h>
main()
{
 int i,j,k,rows_1,col_1,rows_2,col_2,sum=0;
 printf("Enter number of rows and columns of matrix 1\n");
 scanf("%d %d",&rows_1,&col_1);
 printf("Enter number of rows and columns of matrix 2\n");
 scanf("%d %d",&rows_2,&col_2);
 int a1[rows_1][col_1],a2[rows_2][col_2],mul[rows_1][col_2];
 if(col_1==rows_2) 
{
 printf("Enter Matrix 1\n");
 for(i=0;i<rows_1;i++) 
{
 for(j=0;j<col_1;j++) 
{
 scanf("%d",&a1[i][j]);
 
}
 
}
 printf("Enter Matrix 2\n");
 for(i=0;i<rows_2;i++) 
{
 for(j=0;j<col_2;j++) 
{
 scanf("%d",&a2[i][j]);
 
}
 
}
 for(i=0;i<rows_1;i++) 
{
 for(j=0;j<col_2;j++) 
{
 for(k=0;k<rows_2;k++) 
{
 sum+=a1[i][k]*a2[k][j];
 
}
 mul[i][j]=sum;
 sum=0;
 
}
 
}
 printf("Multiplication of above matrices is\n");
 for(i=0;i<rows_1;i++) 
{
 for(j=0;j<col_2;j++) 
{
 printf("%d\t",mul[i][j]);
 
}
 printf("\n");
 
}
 
}
 else 
{
 printf("Not possible with the given rows and columns\n");
 
}

}
