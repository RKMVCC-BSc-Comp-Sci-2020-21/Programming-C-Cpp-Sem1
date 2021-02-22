#include<stdio.h>

int main(){
    int i,j,a[10][10],r,c;
    printf("Enter the number of row and column in a matrix:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++){
            scanf("%d",&a[i][j]); 
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
    return 0;
}
