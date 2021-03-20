//AMSTRONG NUMBER
//Name:SOUMYA PAL Roll No:722

#include <stdio.h>
int main()
{
    int i=1,a,b,c;
    while(i++<=500)
    {
        a=i%10; //last digit
        b=i%100; 
        b=(b-a)/10; //second digit
        c=i/100;
        if(((a*a*a)+(b*b*b)+(c*c*c))==i)
            printf("the amstrong number is %d\n",i);        
    }
    return 0;
}
