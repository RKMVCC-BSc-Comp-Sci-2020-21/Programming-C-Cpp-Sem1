/* Write a program to input number and check if thw number is PERFECT number.
        [// i.e. 6=1,2,3 ------ 1+2+3=6]*/

#include<stdio.h>

main()

 {
     int number, sum=0, i=1;
     printf("Please enter a number to check perfect number\n");
     scanf("%d",&number);
     while(i<number)                                  // [// Using WHILE LOOP]
      {
           if(number%i==0)
         {
          sum=sum+i;
         }
            i++;
     }
        if(sum==number)
       printf("\nEntered number %d is a perfect number",i);
       else
      printf("\nEntered number %d is not a perfect number",i);
 }
