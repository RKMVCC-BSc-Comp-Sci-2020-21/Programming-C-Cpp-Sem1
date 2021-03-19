//Name:- Avirup Dutta  ,  Roll no:- 721

// This type of loop
// *******
// ******
// *****
// ****
// ***
// **
// *

#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter n \n ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
