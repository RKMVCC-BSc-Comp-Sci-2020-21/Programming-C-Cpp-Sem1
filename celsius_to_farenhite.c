#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("\n Enter temperature in Celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("%.f Celsius=%.4f Fahrenheit",celsius,fahrenheit);
    return 0;
}
