#include <stdio.h>
int add(int a,int b )
{
	 int c;
	 c=a+b;
	 return (c);
}
int main()
{
	 int x,y,z;
	 printf ("enter the value of x:");
	 scanf ("%d",&x);
	 printf ("enter the value of y:");
	 scanf ("%d",&y);
	 z=add(x,y); //funtion call 
	 printf ("the sum is :%d",z);
	 return 0;
}
