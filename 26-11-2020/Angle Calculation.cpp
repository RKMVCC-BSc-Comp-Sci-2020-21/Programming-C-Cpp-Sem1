//Radians or Degree calculation by Sudipta Sarkar    date - 27/11/2020

#include<stdio.h>
#include<math.h>

float PI = 3.14;		//global variables
int main()

{ 
		char i;
		char R;
		char r;
		char d;
		char D;
		
    printf("\n Enter your Known Angle Mathod [D=degree , R=radians] = \t");
    scanf("%c",&i);

	if(i == 'R'|| i == 'r')
	{
	
   float x=0,z;
   
   printf("Enter Your Angle in Radians : ");
   scanf("%f",&x);
   
   z = (180*x)/PI ;
   
   printf("\t %.3f Radians equals to %.3f Degree",x,z);
	}
	
	else if (i == 'D'|| i == 'd')
	{
		float x=0,z;
   
   printf("Enter Your Angle in degrees : ");
   scanf("%f",&x);
   
   z = (PI/180)*x;
   
   printf("\t %.3f Degrees equals to %.3f Radians",x,z);
	}
	
	else
	{
		printf("\t Wrong KEY \a");	
	} 
	
   
   return 0;
	
	
}
