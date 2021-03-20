// Name:- Avirup Dutta  ,  Roll No:-721

// Type of loop (let n=5)
//   *********
//   *******
//   *****
//   ***
//   * 
#include<stdio.h>

int main(){
    int  i,j,k,rows;
    printf("Enter the number of rows \n");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(j=1;j<=rows-i;j++){
            printf("");
        }
        for(k=1;k<=((2*i)-1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
