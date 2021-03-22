/* This program computes transpose of a matrix A. */
//Name:SOUMYA PAL Roll NO:722

#include <stdio.h>

int main()
{ 
int mat[12][12], transpose[12][12];
int i, j, row, col; 

do{ 
printf("Enter number of rows R (0 < R < 13): "); 
scanf("%d", &row); 
} while ((row < 1) || (row > 12));

do{ 
printf("Enter number of columns C (0 < C < 13): "); 
scanf("%d", &col);
} while ((col < 1) || (col > 12)); 

for (i = 0; i < row; i++)
{ 
printf("Enter %d values for row no. %d : ", col, i);
for (j = 0; j < col; j++) 
scanf("%d", &mat[i][j]); 
} 
printf("\nMatrix A:\n"); 
for (i = 0; i < row; i++) 
{ 
for (j = 0; j < col; j++)
{ 
printf("%d\t", mat[i][j]); 
} 
printf("\n");
} 
for (i = 0; i < row; i++) 
{ 
for (j = 0; j < col; j++)
{ 
transpose[j][i] = mat[i][j]; 
} 
} 
printf("\nTranspose of matrix A: \n");
for (i = 0; i < col; i++)
{ 
for (j = 0; j < row; j++) 
{ 
printf("%d\t", transpose[i][j]); 
} 
printf("\n"); 
} 
  
printf("\nThank you.\n"); 
return 0; 
} 
