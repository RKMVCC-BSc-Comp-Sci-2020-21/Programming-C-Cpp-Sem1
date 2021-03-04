#include<stdio.h>
main()
{
 int i,j,rows,col;
 printf("Enter number of rows\n");
 scanf("%d",&rows);
 printf("Enter number of columns\n");
 scanf("%d",&col);
 int a1[rows][col],a2[rows][col],diff[rows][col];
 printf("Enter Matrix 1\n");
 for(i=0;i<rows;i++) 
{
 for(j=0;j<col;j++) 
{
 scanf("%d",&a1[i][j]);
 
}
 
}
 printf("Enter Matrix 2\n");
 for(i=0;i<rows;i++) 
{
 for(j=0;j<col;j++) 
{
 scanf("%d",&a2[i][j]);
 
}
 
}
 for(i=0;i<rows;i++) 
{
 for(j=0;j<col;j++) 
{
 diff[i][j]=a1[i][j]-a2[i][j];
 
}
 
}
 printf("Difference of above matrices is\n");
 for(i=0;i<rows;i++) 
{
 for(j=0;j<col;j++) 
{
 printf("%d\t",diff[i][j]);
 
}
 printf("\n");
 
}

}
