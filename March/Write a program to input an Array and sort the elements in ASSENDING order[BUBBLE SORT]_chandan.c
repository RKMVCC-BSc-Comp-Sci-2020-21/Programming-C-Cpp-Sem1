// Write a program to input an Array and sort the elements in ASSENDING order.[BUBBLE SORT]      
 
 
 
#include<stdio.h>

main()

{

        int arr[100],i,j,n,temp;
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        
        printf("Enter %d Numbers: ", n); 
        for(i=0; i<n;i++)
        scanf("%d",&arr[i]);
        for(i = 0; i < n; i++)
        {
             for(j = i+1; j < n; j++)
                {
                 if( arr[i] > arr[j])
                     {
                        temp = arr[i];                                    // [ Let, a= 10, b= 20  
                                                                          //    Now, a=a+b=10+20=30; /b=a-b=30-20=10; /a=a-b=30-10=20]
                         arr[i] = arr[j];                                   // [  Let, a= 10, b= 20 
                                                                              //   Now, a=a*b=10*20=200; /b=a/b=200/20=10; /a=a/b=200/10=20]
                         arr[j] = temp;
                      } 
                }
         }
    
             printf("Sorted Array:\n ");
              for(i = 0; i < n; i++)
               {
                printf("%d, ", arr[i]);
              }
}
