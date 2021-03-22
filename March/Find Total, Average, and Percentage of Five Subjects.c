/* C program to Find Total, Average, and Percentage of Five Subjects */

#include <stdio.h>

int main()
{
    int english, chemistry, computers, physics, maths; 
    float Total, Average, Percentage;

    printf("Please Enter the marks of five subjects: \n");
    scanf("%d%d%d%d%d", &english, &chemistry, &computers, &physics, &maths);

    Total = english + chemistry + computers + physics + maths;
    Average = Total / 5;
    Percentage = (Total / 500) * 100;

    printf("Total Marks = %.2f\n", Total);
    printf("Average Marks = %.2f\n", Average);
    printf("Marks Percentage = %.2f", Percentage);

    return 0;
}
