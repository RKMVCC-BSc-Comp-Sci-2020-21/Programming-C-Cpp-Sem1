/* C Program to find Perimeter of a Rectangle using length and width */
 
#include<stdio.h>
int main()
{
  	float width, length, Perimeter; 
 
  	printf ("\n Please Enter the Width of a Rectangle  :  ");
  	scanf ("%f",&width);

  	printf ("\n Please Enter the Length of a Rectangle :  ");
  	scanf ("%f",&length);
	   
  	Perimeter = 2 * (length + width);
 
	printf("\n Perimeter of a Rectangle =  %.2f", Perimeter);
 
  	return 0;
}
