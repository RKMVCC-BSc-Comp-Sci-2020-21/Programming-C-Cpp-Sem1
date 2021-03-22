/* C Program to find Area of an Equilateral Triangle */

#include<stdio.h>
#include<math.h>

int main()
{
  float side;
  float Area, Perimeter, Semi, Altitude; 

  printf("\n Please Enter Length of any side\n");
  scanf("%f",&side);

  Area = (sqrt(3)/4)*(side*side);
  Perimeter = 3*side; 
  Semi = Perimeter/2;
  Altitude = (sqrt(3)/2)*side;

  printf("\n Area of Equilateral Triangle = %.2f\n",Area);
  printf("\n Perimeter of Equilateral Triangle = %.2f\n", Perimeter);
  printf("\n Semi Perimeter of Equilateral Triangle = %.2f\n", Semi);
  printf("\n Altitude of Equilateral Triangle = %.2f\n", Altitude);
  return 0;
}
