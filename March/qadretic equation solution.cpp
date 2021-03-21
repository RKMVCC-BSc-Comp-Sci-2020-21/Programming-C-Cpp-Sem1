#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c,x1,x2,disc;
	printf("enter the value of a , b , c\n");
	scanf("%f%f%f",&a,&b,&c);
	if (a==0)
	{
		printf("\n not a valid quard equation");
		exit(1);
	}
	disc = (b*b)-4*a*c;
	if(disc<0)
	{
		printf("\n the quard equation has no solution");
		exit(1);
	}
	printf("\n the equation has real solution");
	if (disc == 0)
	printf("\n the solution are equal");
	if (disc >0)
	   printf("\n the solution are not equal");
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
	printf("\n the solutions are %f %f",x1 , x2);
	
return 0;	   
	
}
