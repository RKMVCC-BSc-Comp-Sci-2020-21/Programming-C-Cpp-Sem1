//Name:- Avirup Dutta  ,  Roll No:-721
//Write a program to input an array and show the largest element in array

#include<stdio.h>

int main(){
    int size,i,largest,arr[100];
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the element of the array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
     for(i=0;i<size;i++){
         if(largest<arr[i])
             largest=arr[i];
         

     }
     printf("\n largest element present in the array is %d",largest);
    return 0;
}
