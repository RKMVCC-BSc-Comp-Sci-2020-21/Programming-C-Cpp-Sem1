#include<stdio.h>

int main(){
    int r,c,i,j,a[10][10],b[10][10],s[10][10];
    printf("Enter the number of row and column of matrix a and b: ");
    scanf("%d%d",&r,&c);
    printf("Enter the element of matrix a:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }    
    printf("Enter the element of matrix b:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            s[i][j]=a[i][j]+b[i][j];
        }
    }  
     printf("The resultant matrix after addition:\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
     }      
    return 0;
}
