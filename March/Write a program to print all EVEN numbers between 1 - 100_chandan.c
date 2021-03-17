// Write a program to print all EVEN numbers between 1 - 100.

#include <stdio.h>

main()
{
   int i;
   printf("Enter a even number (between 1-100):\n ");
   scanf("%d", &i);
   for(i=1; 1<=100; i++)
  {
    if(i%2==0)                                   
    {
      printf("%d",i);
     } 
  }
}
