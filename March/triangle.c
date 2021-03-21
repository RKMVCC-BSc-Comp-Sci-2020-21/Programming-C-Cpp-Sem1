#include <stdio.h>
#include <conio.h>
int main ()
{
	float a,b,c;
	printf ("enter three sides:");
	scanf ("%f%f%f", &a,&b,&c);
	if (a<=0 || b<=0 || c<=0) 
	{
		printf ("the side cant be less than or equal to zero:");
		return 0;
		
	}
	if ((a+b>c) && (b+c>a) && (c+a>b))
	
        	printf ("the triangle is possible");
    else 
	        printf ("the triangle is not possible");
	
	    
}
