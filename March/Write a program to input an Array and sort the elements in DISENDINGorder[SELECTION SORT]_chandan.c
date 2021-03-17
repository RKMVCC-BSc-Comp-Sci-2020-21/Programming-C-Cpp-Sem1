// Write a program to input an Array and sort the elements in DISENDINGorder.[SELECTION SORT]      
 
#include<stdio.h> 

main() 

{
        int arr[100],i,j,n,temp,min;                                     
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Enter %d Numbers: ", n);                                  
        for(i=0; i<n;i++)
        scanf("%d",&arr[i]);   
        
       for (i = 0; i < n-1; i++)                                          
       { 
        min = i;  
        for (j = i+1; j < n; j++)  
        {
        if (arr[j] < arr[min])                                              
            min = j;  
        }
        temp=arr[min];  
        arr[min]=arr[i];
        arr[i]=temp;                                                       
       }
    
    
    printf("Sorted Array:\n ");                                            
              for(i = 0; i < n; i++)                                         
               {
                printf("%d, ", arr[i]);                                     
              }
 }
