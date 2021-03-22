/* C Program to find Area of a Trapezoid */

#include<stdio.h>

int main()
{
  float base1, base2, height, Area, Median;
 
  printf("\n Please Enter two bases and height of the trapezium \n");
  scanf("%f %f %f", &base1, &base2, &height);

  Area = 0.5 * (base1 + base2) * height;
  Median = 0.5 * (base1+ base2);

  printf("\n Area of a trapezium = %.2f \n", Area);
  printf("\n Median of a trapezium = %.2f \n", Median);

  return 0;
}
