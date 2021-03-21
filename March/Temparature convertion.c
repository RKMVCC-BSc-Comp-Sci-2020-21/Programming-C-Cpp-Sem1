
/* tempConversion.c
   Temperature conversion.
   Formula: C = (F - 32) / 1.8
*/

#include <stdio.h>
#define F_LOW	0
#define F_HIGH	300
#define STEP	25

int main()
{
  typedef double Real;	// type definition
  Real fahrenheit, celsius;
  
  fahrenheit = F_LOW;
  printf("\tFahrenheit\tCelsius\n");
  while (fahrenheit <= F_HIGH){
    celsius = (fahrenheit - 32.0) / 1.8;
    printf("\t%.2lf\t\t%.2lf\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + STEP;
  }
  return 0;
}
