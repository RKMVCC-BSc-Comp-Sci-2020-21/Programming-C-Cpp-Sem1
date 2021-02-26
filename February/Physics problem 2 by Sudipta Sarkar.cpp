#include<stdio.h>
#include<math.h>

float g = 9.81;
float PI = 3.14;
long int r = 6400000;
float w = 0.000073;		//global variables
int main()

{

   float x=0,y,m,f,z;

   printf("All values are SI units [ Metter / Kg / Second]\n");

   printf("Enter the mass of particle = ");
   scanf("%f",&m);


   printf("Enter the Velocity of the particle = ");
   scanf("%f",&f);


   printf("Enter Latitude in degrees = ");
   scanf("%f",&x);

   printf("\n\n _____________________________________________\n\n");


   if(x==0)
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



   printf("\n \n The Net - Weight of this particle = %.2f  Kg-Weight (N) \n\n",(y*m));

   if(f>0)
   {
       printf("The Kinetic Eneargy of this particle = %.2f Jule \n\n",((0.5)*m*f*f));
   }
   else
   {
       printf(" Kinetic Energy is ZERO \n\n");
   }

   printf("The Potential Energy of this particle = %.2f Jule \n\n",(m*y*r));


   z = ((0.5)*m*f*f) + (m*y*r);

   printf("Total Energy of this particle = %.2f Jule \n\n",z);

 printf("\n\n _____________________________________________\n\n");

   return 0;


}
