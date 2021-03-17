//Write a program to input an array and show the FREQUENCY of a user given numbers.


#include<stdio.h>
 
main()
  
{
         int a[100], i,j,n,count=0;
        printf("\n Enter the size of the array: ");
        scanf("%d", &n);
         printf("\n Enter %d elements of  the array: \n", n);    
        for(i=0; i<n;i++)
        scanf("%d",&a[i]);
 
       printf("Enter the number: ");
        scanf("%d", &j);
 
        for (i = 0; i < n; i++) 
        {
            if (a[i]== j)
                count++;
        }
           printf("\n Number of %d Element found", count);
           
 }
