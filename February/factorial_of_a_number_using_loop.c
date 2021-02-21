//factorial of a number using for loop
//Name:- Avirup Dutta , Roll No:-721

#include<stdio.h>
#include<math.h>

int main(){
    // factorial(4)=4*3*2*1
    // factorial(6)=6*5*4*3*2*1
    int i=1,n,factorial =1;
    printf("Enter the value of the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("The value of factorial of %d is %d.\n",n,factorial);
    return 0;
}
