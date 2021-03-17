/* Inverted Half Pyramid of * Diagram print (2) using NESTED LOOP.

                      *****
                      ****
                      ***
                      **
                      *     */

#include<stdio.h>

main()

{
  int i,j,n;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=n;i>=1;i--)                                 // [// For decreasing we use "i--"]
  {
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
   }
   
}
