#include<stdio.h>
main()
{
  int n,r,sum=0,t;
  printf("enter the number");
  scanf("%d",&n);
  t=n;
  while(n>0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
  printf("reverse number of %d",sum);
}
