/* This program performs the summation of two matrices. */
//Name:SOUMYA PAL Roll no:722

#include <stdio.h> 

void input(int mat[][12], int, int);
void output(int mat[][12], int, int); 
void add(int matA[][12], int matB[][12], int matC[][12], int, int); 

int main() 
{ 
int row, col;
int A[12][12], B[12][12], C[12][12]; 

do { 
printf("Enter number of rows (1 <= M <= 12) :"); 
scanf("%d", &row); 
} while ((row < 1) || (row > 12)); 

do { 
printf("Enter number of columns (0 < N <= 12) :");
scanf("%d", &col); 
} while ((col < 1) || (col > 12)); 

printf("\nEnter Data for Matrix A :\n"); 
input(A, row, col); 
printf("\n"); 
printf("\nMatrix A Entered by you :\n"); 
output(A, row, col); 

printf("\nEnter Data for Matrix B :\n"); 
input(B, row, col); 
printf("\n"); 
printf("\nMatrix B Entered by you :\n");
output(B, row, col); 

add(A, B, C, row, col); 
printf("\nMatirx A + Matrix B = Matrix C. \n"); 
printf("Matrix C :\n"); 
output(C, row, col); 
printf("\nThank you. \n"); 
return 0; 
} 

void input(int mat[][12], int row, int col)
{ 
int i, j; 
for (i = 0; i < row; i++) 
{ 
printf("Enter %d values for row no. %d : ", col, i); 
for (j = 0; j < col; j++) 
scanf("%d", &mat[i][j]); 
}
} 

void output(int mat[][12], int row, int col) 
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
void add(int matA[][12], int matB[][12], int matC[][12], int m, int n) 
{ 
int i, j; 
for (i = 0; i < m; i++) 
{ 
for (j = 0; j < n; j++) 
{ 
matC[i][j] = matA[i][j] + matB[i][j]; 
} 
} 
}
