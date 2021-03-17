/*    Half Pyramid of * Diagram print (1) using NESTED LOOP.

                       *
                       **
                       ***
                       ****
                       *****     */

#include<stdio.h>


main()
  
  
{
  int i,j;
  for(i=1;i<=5;i++)                       //[// For increasing we use "i++"]
  {
     for(j=1;j<=i;j++)
     printf("*");
    printf("\n");
   }
    
    
    
}
