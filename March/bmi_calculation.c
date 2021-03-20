//BMI CALCULATION
//Name: SOUMYA PAL Roll NO:722

#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("the height(in meter) & weight(in kg) of the person is:");
    scanf("%f %f",&h,&w);
    bmi= w/(h*h);
    printf("the bmi of that person is:%f",bmi);
    if(bmi<15)
        printf("\nstarvation");
    else if(bmi>=15.1 && bmi<=17.5)
        printf("\nanorexic");
    else if(bmi>=17.6 && bmi<=18.5)
        printf("\nunderweight");
    else if(bmi>=18.6 && bmi<=24.9)
        printf("\nideal");
    else if(bmi>=25 && bmi<=25.9)
        printf("\noverweight");
    else if(bmi>=30 && bmi<=30.9)
        printf("\nobese");
    else if(bmi>=40)
        printf("\nmorbidly obese");
    return 0;                            
}
