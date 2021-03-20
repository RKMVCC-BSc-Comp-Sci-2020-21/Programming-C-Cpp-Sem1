// Name of a triangle by its charecteristics //

#include<stdio.h>

int main()
{
	int s1,s2,s3;
	printf("Enter three sides of a triangle:");
	scanf("%D %D %d",&s1,&s2,&s3);
	
	if((s1+s2)>s3){
		if(s1==s2==s3)
		   printf("It is an equilateral triangle");
        else if(s1==s2|| s2==s3|| s1==s3)
           printf("It is an isosceles triangle");
        else
		   printf("It is a scalene triangle");
		      
	}
	else
	    printf("Invalid entry");
	    return 0;
}
