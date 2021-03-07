#include<stdio.h>
main()
{
  int n,r,sum=0,t;
  printf("enter the number");
  scanf("%d",&n);
  t=n;
  while(n>02)
  {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
  }
  if(t==sum)
    printf("armstrong number");
   else
     printf("not armstrong number");
}  
