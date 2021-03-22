//Matrix_multiplication by Avirup Dutta Roll no:721
#include <stdio.h>

int main(){
    int a[10][10],b[10][10],m[10][10],i,j,k,r1,c1,r2,c2;
    printf("Enter the number of row and column of a: \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of row and column of b: \n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2){
        printf("Enter the element of matrix a: \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the element of matrix b: \n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                for(k=0;k<c1;k++){
                    m[i][j]=m[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    }
    else{
        printf("This is invalid\n");
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
