#include <stdio.h>

int main()
{
    float principle, rate, time, simple_interest;

    printf("Enter the principle :");
    scanf("%f", &principle);
    printf("Enter the rate :");
    scanf("%f", &rate);
    printf("Enter the time :");
    scanf("%f", &time);

    simple_interest = principle * rate * time / 100;

    printf("Simple interest is %0.2f", simple_interest);

    return 0;
}
