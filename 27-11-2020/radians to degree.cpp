//Radians to Degree  by Sudipta Sarkar    date - 27/11/2020

#include<stdio.h>
#include<math.h>

float PI = 3.14;		//global variables
int main()

{ 
   float x=0,z;
   
   printf("Enter Your Angle in Radians : ");
   scanf("%f",&x);
   
   z = (180*x)/PI ;
   
   printf("\t %.3f Radians equals to %.3f Degree",x,z);
   
   return 0;
	
	
}
