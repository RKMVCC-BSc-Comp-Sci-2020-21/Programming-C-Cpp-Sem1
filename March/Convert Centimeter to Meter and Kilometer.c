/* C Program to Convert Centimeter to Meter and Kilometer */
 
#include <stdio.h>
 
int main()
{
  	float cm, meter, km;
 
 	printf("\n Please Enter the Length in Centimeters  :  ");
  	scanf("%f", &cm);
  
  	meter = cm / 100.0;
  	km = cm / 100000.0; 	
 
    printf("\n Length in Meters  = %.4f", meter);
    printf("\n Length in Kilometers   = %.4f", km);
  
   	return 0;
}
