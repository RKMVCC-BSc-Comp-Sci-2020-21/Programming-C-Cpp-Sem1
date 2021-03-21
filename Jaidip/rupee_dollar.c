#include<stdio.h>
int main()
{
    int r;
    double d;
    for(r=10;r<=510;r+=5)
    {
         d=0.014*(double)r;
         printf("%d rupee = %lf$ \n",r,d);
    }
    return 0;
}