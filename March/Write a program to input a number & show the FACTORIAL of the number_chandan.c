//Write a program to input a number & show the FACTORIAL of the number.

#include<stdio.h>
main()
  
{
      int a;
      fact =1,n;                                    //[//We are using (fact =1) to eliminate the GARBAGE VALUES]
      printf("Enter a number:\n");
      scanf("%d", &n);
      for(a=1; a<=n; a++)
      {
       fact= fact*a;
      }   
     printf("factorial of %d is:%d",n,fact);
}
