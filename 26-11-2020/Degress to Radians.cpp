//Degree to Radians  by Sudipta Sarkar    date - 27/11/2020

#include<stdio.h>
#include<math.h>

float PI = 3.14;		//global variables
int main()

{ 
   float x=0,z;
   
   printf("Enter Your Angle in degrees : ");
   scanf("%f",&x);
   
   z = (PI/180)*x;
   
   printf("\t %.3f Degrees equals to %.3f Radians",x,z);
   
   return 0;
	
	
}
