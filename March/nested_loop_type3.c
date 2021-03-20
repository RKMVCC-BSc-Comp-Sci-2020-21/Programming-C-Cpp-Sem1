//Name:- Avirup Dutta  ,  Roll No:- 721 

// This type of loop
// 123456789
// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1

#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter n \n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}
