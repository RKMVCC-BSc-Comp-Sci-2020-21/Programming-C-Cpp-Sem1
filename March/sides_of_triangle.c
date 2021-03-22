//SIDES OF TRIANGLE
//Name:SOUMYA PAL Roll:722

#include<stdio.h>
int main()
{
    int side1,side2,side3,sum,largeside;
    printf("the three sides of triangle is:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1>side2)
    {
        if(side1>side3)
        {
            sum=side2+side3;
            largeside=side1;
        }
        else
        {
            sum=side1+side2;
            largeside=side3;
        }
        
    }
    else
    {
        if(side2>side3)
        {
            sum=side1+side3;
            largeside=side2;
        }
        else
        {
            sum=side1+side2;
            largeside=side3;
        }
    }
    if(sum>largeside)
      printf("the triangle is valid\n");
    else
      printf("the triangle is invalid\n");
    return 0;    
}
