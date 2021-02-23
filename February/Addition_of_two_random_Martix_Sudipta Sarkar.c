#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, m, n,mat3[100][100],mat1[100][100], mat2[100][100];
	printf("1st random matrix:\n ");

    printf("Enter the row dimension of the matrix: ");
    scanf("%d",&m);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d",&n);

    for(i = 0; i < m;i++)
	 {
    	for(j = 0; j < n;j++) {
            mat1[i][j]=rand()%10;
    		printf("%d ",mat1[i][j]);
    	}
    	printf("\n");
    }
    printf("2nd random matrix: \n");

    printf("Enter the row dimension of the matrix: ");
    scanf("%d", &m);

    printf("Enter the column dimension of the matrix: ");
    scanf("%d", &n);

    for(i = 0; i < m;i++) {
    	for(j = 0; j < n;j++)
		 {
            mat2[i][j]=rand()%10;
    		printf("%d ",mat2[i][j]);
    	}
    	printf("\n");
    }
     printf("\nAdding the two matrix.....");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
		
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("\nBoth matrix added successfully!");
    printf("\nHere is the new matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
		
            printf("%d ",mat3[i][j]);
            
        }
        printf("\n");
    }

	return 0;
}
