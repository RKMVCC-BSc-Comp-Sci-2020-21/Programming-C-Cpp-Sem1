#include<stdio.h>
#include<math.h>

float g = 9.81;
float PI = 3.14;
long int r = 6400000;
float w = 0.000073;		//global variables
int main()

{ 
     
   float x=0,y;
   
   printf("All values are SI units\n");
   
   printf("Enter Latitude in degrees = ");
   scanf("%f",&x);
   
   
   if(x==90)
   {
   	 printf("The Acceleration due to Gravity is not Change \t g' = g = %.2f m/s^2",g);
   	 
   	 printf("It is earth's pole");
   }
   
   else if(x==0)
   {
   	
   	 y = g - w*w*r;
   
   printf(" The Changes of Acceleration due to Gravity \t g' = %.2f m/s^2 \n",y);
   
   printf("It is earth's Equator");
   
   }
   else 
   {
   
   	 y = g - w*w*r*cos(PI*x/180)*cos(PI*x/180);
   
   printf(" The Changes of Acceleration due to Gravity \t g' = %.2f m/s^2",y);
   
   }
 
   return 0;
	
	
}
