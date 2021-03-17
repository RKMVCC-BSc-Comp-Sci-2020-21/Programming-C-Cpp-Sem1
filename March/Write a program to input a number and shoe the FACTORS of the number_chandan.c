//Write a program to input a number and shoe the FACTORS of the number.

#include <stdio.h>
main()

{
     int num,i;
     printf("Enter a number:");
     scanf("%d", &num);
     
     for(i=1;i<=num;i++)
    {
      if(num%i==0)
      {
      printf("%d",i);
      }
      
    }
    
}
