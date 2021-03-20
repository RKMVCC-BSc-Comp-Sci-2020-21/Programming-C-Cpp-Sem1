#include<stdio.h>
#include<math.h>
int main()
{
    double x[10],y[10];
    for(int i=0;i<10;i++)
    {
        scanf("%lf",&x[i]);
    }
    
    for (int i = 0; i <10; i++)
    {
        y[i]=sin(x[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%lf\n",y[i]);
    }

    
    return 0;
    
}