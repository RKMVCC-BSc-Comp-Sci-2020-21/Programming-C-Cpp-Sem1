#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 20
float func(float x)
{
 float res;
 res=1/(1+x);
 return res;
}

void main(void)
{
 float arr[MAX],h;
 float x0,xn,f0,fn,sum,x,result;
 float n,i;
 clrscr();
 printf("\n\tENTER THE LOWER LIMIT: ");
 scanf("%f",&x0);
 printf("\n\tENTER THE UPPER LIMIT: ");
 scanf("%f",&xn);
 printf("\n\tENTER THE STEP SIZE; ");
 scanf("%f",&h);
 n=(xn-x0)/h;
 f0=func(x0);
 fn=func(xn);
 sum=f0+fn;
 x=x0+h;
 for(i=1;i<=n-1;i+=h)
 {
  arr[i]=func(x);
  x+=h;
 }
 for(i=1;i<=n-1;i+=h)
    sum=sum+2*arr[i];
 result=(h/2)*sum;
 printf("\n\tTHE RESULT IS %f",result);
 getch();
}