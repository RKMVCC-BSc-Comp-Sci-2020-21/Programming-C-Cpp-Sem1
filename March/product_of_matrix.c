/* This program computes the product of two matrices A and B. */
//NAME:SOUMYA PAL Roll no:722

#include <stdio.h> 

void input(int mat[][8], int, int); 
void output(int mat[][8], int, int); 
void product(int matA[][8], int matB[][8], int matC[][8], int, int, int); 

int main() 
{ 
int rowA, colA, rowB, colB; 
int matA[8][8], matB[8][8], matC[8][8]; 

printf("This program performs product of matrices A and B (A x B).\n"); 
do{ 
printf("Enter number of rows in matrix A (1 <= M <= 8): "); 
scanf("%d", &rowA); 
} while ((rowA < 1) || (rowA > 8));

do{
printf("Enter number of columns in matrix A (1 <= N <= 8): "); 
scanf("%d", &colA); 
} while ((colA < 1) || (colA > 8)); 
printf("\nNumber of rows in matrix B is equal "); 
printf("to number of columns in matirx A:\n");
rowB = colA; 
do { 
printf("Enter number of columns in matrix B (1 <= P <= 8): "); 
scanf("%d", &colB); 
} while ((colB < 1) || (colB > 8)); 
printf("\nEnter data for matrix A :\n"); 
input(matA, rowA, colA); 
printf("\n"); 
printf("Matrix A: \n");
output(matA, rowA, colA); 
printf("\n"); 
printf("\nEnter data for matrix B :\n"); 
input(matB, rowB, colB);
printf("\n"); 
printf("Matrix B: \n");
output(matB, rowB, colB); 
printf("\n");
product(matA, matB, matC, rowA, colA, colB);
printf("Matrix C (matrix A x matrix B = matrix C) : \n"); 
output(matC, rowA, colB); 
printf("\nThank you.\n"); 
return 0; 
} 
void input(int mat[][8], int row, int col)
{ 
int i, j; 
for (i = 0; i < row; i++) 
{ 
printf("Enter %d values for row no. %d : ", col, i); 
for (j = 0; j < col; j++) 
scanf("%d", &mat[i][j]); 
} 
} 
void output(int mat[][8], int row, int col) 
{ 
int i, j; 
for (i = 0; i < row; i++) 
{ 
for (j = 0; j < col; j++)
{ 
printf("%d\t", mat[i][j]);
}
printf("\n"); 
} 
} 
void product(int matA[][8], int matB[][8],
int matC[][8], int m1, int n1, int n2) 
{ 
int i, j, t; 
for (i = 0; i < m1; i++) 
{ 
for (j = 0; j < n2; j++) 
{ 
matC[i][j] = 0;
for (t = 0; t < n1; t++) 
{ 
matC[i][j] += matA[i][t] * matB[t][j]; 
} 
} 
} 
} 
