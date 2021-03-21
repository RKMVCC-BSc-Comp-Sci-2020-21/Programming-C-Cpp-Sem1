/*C program to swap two numbers using pointers.*/
#include <stdio.h>
 
// function : swap two numbers using pointers
void swap(int *a,int *b)
{
    int t;
     t   = *a;
    *a   = *b;
    *b   =  t;
}
 
int main()
{
    int num1,num2;
     
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
     
    //print values before swapping
    printf("Before Swapping: num1=%d, num2=%d\n",num1,num2);
     
    //call function by passing addresses of num1 and num2
    swap(&num1,&num2);
     
    //print values after swapping
    printf("After  Swapping: num1=%d, num2=%d\n",num1,num2);    
     
    return 0;
}
