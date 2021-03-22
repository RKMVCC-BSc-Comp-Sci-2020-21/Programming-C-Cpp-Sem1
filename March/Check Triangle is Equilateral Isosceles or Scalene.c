/* C Program to Check Triangle is Equilateral Isosceles or Scalene */

#include<stdio.h>
 
int main()
{
	int side1, side2, side3;
 
  	printf("\n Please Enter Three Sides of a Triangle : ");
  	scanf("%d%d%d", &side1, &side2, &side3);
  	
  	if(side1 == side2 && side2 == side3)
  	{
  		printf("\n This is an Equilateral Triangle");
 	}
 	else if(side1 == side2 || side2 == side3 || side1 == side3)
 	{
 		printf("\n This is an Isosceles Triangle");
	}
	else
	{
		printf("\n This is a Scalene Triangle");
	}  
 	return 0;
 }
