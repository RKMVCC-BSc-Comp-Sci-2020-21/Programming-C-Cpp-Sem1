/* C Program to find Volume and Surface Area of Sphere */

#include <stdio.h>

#define PI 3.14

int main()
{
  float radius, sa,Volume;

  printf("\n Please Enter the radius of a Sphere \n");
  scanf("%f", &radius);

  sa =  4 * PI * radius * radius;
  Volume = (4.0 / 3) * PI * radius * radius * radius;

  printf("\n The Surface area of a Sphere = %.2f", sa);
  printf("\n The Volume of a Sphere = %.2f", Volume);

  return 0;
}
