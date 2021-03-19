/*  Inverted Arrange this numbers using NESTED LOOP/Inverted Half Pyramid of numbers.

                      12345
                      1234
                      123
                      12
                      1    */ 

#include<stdio.h>

main()

{

  int i,j,n;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=n;i>=1;i--)                                // [// For decreasing we use "i--"]
  {
     for(j=1;j<=i;j++)
     printf("%d",j);
    printf("\n");
   
   }
}   
