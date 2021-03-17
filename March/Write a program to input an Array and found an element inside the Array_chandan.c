// Write a program to input an Array and found an element inside the Array.


#include<stdio.h>

#include<stdlib.h>   // for exit()

main()

{
          int a[100], i, j,n;
        printf("\n Enter the size of the array: ");
        scanf("%d", &n);
         printf("\n Enter %d elements of  the array: \n", n);
        for(i=0; i<n;i++)
        scanf("%d",&a[i]);
 
       printf("Enter the j: ");
        scanf("%d", &j);
 
        for (i = 0; i < n; i++) 
        {
            if (a[i]== j)
           {
           printf("Element found");
           exit(0);
           }
        }
        printf("Element not found");
        
 }
