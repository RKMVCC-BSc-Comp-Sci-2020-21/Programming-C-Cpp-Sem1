// PALINDROME  number check. [i.e - 1 2 1 = 1 2 1]

#include<stdio.h>

main()

{
   int num,rem,sum=0,t;
   printf("Enter the number");
   scanf("%d",&num);
  t = num;
  while(num>0)
  {
   rem= num%10;
   sum=sum*10+rem;
   num=num/10;
  }
  if (t==sum)
  printf("Palindrome number");
  else
  printf("not Palindrome number");
  
}
