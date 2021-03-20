//FIND POLAR COORDINATE
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,q;
    printf("\nthe cartesian coordinate is:");
    scanf("%d %d",&x,&y);
    r= sqrt(x*x+y*y);
    q= atan(y/x);
    printf("the polar coordinate is:%f %f\n",r,q);
    return 0;
}
