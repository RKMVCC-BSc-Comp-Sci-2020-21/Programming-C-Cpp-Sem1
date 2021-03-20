// Valid triangle(angle) //

#include<stdio.h>

int main()
{
	int A,B,C;
	printf("Enter the angles of triangle in degree:");
	scanf("%D %d %d",&A,&B,&C);
	
	if((A+B+C)==180)
	    printf("The triangle is valid");
	else
	    printf("The triangle is not valid");
	
	return 0;	    
	
}
