// Write a C/C++ program to find the largest of three numbers by SOUBHAGYA PAUL

#include <stdio.h>
int main(){
    int A,B,C;
    printf("\n\tEnter the first number : ");
    scanf("%d",&A);
    printf("\n\tEnter the second number : ");
    scanf("%d",&B);
    printf("\n\tEnter the third number : ");
    scanf("%d",&C);
    if (A>B)
    {
     if  (A>C)
   	   printf("\n\tLargest number is : %d",A);
     else
         	   printf("\n\tLargest number is %d",C);
}
    else
    {
        if (B>C)
          	   printf("\n\tLargest number is %d",B);
        else 
         	   printf("\n\tLargest number is %d",C);
    }  
    return 0;
}
