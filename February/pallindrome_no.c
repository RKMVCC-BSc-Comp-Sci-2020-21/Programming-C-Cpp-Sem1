#include<stdio.h>

int main(){
    int n,r,sum=0,t;
    printf("Enter the number:\n");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum){
        printf("Pallindrome number\n");
    }
    else{
        printf("Not pallindrome number");
    }
    return 0;
}
