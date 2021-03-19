//INSERTION SORT.


#include<stdio.h>
main()
{
        int arr[100],i,j,n,temp;
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        
        printf("Enter %d Numbers: ", n);  
        for(i=0; i<n;i++)
        scanf("%d",&arr[i]);
       for(i=1;i<n;i++){
      temp=arr[i];
      j=i-1;
      while((temp<arr[j])&&(j>=0)){
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=temp;
   }
    
             printf("Sorted Array:\n ");
              for(i = 0; i < n; i++)
               {
                printf("%d, ", arr[i]);
              }
} 
