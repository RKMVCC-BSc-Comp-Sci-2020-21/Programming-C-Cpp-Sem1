#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short i, j, m, n,mat3[3][3],mat1[3][3], mat2[3][3];
	printf("1st random matrix:\n ");

    printf("Enter the row dimension of the matrix: ");
    scanf("%hu", &m);

    printf("Enter the column dimension of the matrix: ");
    scanf("%hu", &n);

    for(i = 0; i < m;i++) {
    	for(j = 0; j < n;j++) {
            mat1[i][j]=rand()%10;
    		printf("%d ", mat1[i][j]);
    	}
    	printf("\n");
    }
    printf("2nd random matrix: \n");

    printf("Enter the row dimension of the matrix: ");
    scanf("%hu", &m);

    printf("Enter the column dimension of the matrix: ");
    scanf("%hu", &n);

    for(i = 0; i < m;i++) {
    	for(j = 0; j < n;j++) {
            mat2[i][j]=rand()%10;
    		printf("%d ",mat2[i][j]);
    	}
    	printf("\n");
    }
     printf("\nAdding the two matrix.....");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
    printf("\nBoth matrix added successfully!");
    printf("\nHere is the new matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ",mat3[i][j]);
        printf("\n");
    }

	return 0;
}
