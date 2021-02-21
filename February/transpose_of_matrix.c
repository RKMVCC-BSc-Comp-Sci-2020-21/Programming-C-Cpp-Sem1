#include<stdio.h>

int main(){
    int A[10][10],T[10][10];
    int r,c,i,j;
    printf("Enter thenumber of row and column: ");
    scanf("%d %d",&r,&c);
    printf("Enter the integer of the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n... Transpose of the matrix...\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }    
    return 0;
}
