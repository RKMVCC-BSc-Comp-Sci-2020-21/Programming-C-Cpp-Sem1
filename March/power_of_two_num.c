//POWER OF TWO NUMBERS
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
int main()
{
    float x=0,power;
    int y=0,i;
    printf("enter the two number:");
    scanf("%f %d",&x,&y);
    power=i=1;
    while(i<=y)
    {
        power=power*x;
        i++;
    }
    printf("%f to the power of %d is:%f\n",x,y,power);
    return 0;
}
