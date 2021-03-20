//Name:- Avirup Dutta  ,  Roll No:- 721

//This type loop  (let n=5)
// ******
// *******
// ********
// *********
// **********

#include<stdio.h>

int main(){
    int i,j,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
