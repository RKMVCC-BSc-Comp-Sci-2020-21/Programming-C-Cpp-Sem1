/* C Program to Calculate Area of a Rectangle and Perimeter of a Rectangle */

#include<stdio.h>
int main()
{
  float width, height, Area, Perimeter; 

  printf ("\n Please Enter the Width and Height of the rectangle \n");
  scanf (" %f %f ",&width, &height);

  Area = width * height;
  Perimeter = 2 *(width + height);

  printf("\n Area of a rectangle is: %.2f", Area);
  printf("\n Perimeter of a rectangle is: %.2f", Perimeter);

  return 0;
}
