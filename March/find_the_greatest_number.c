//By Dipmalya Hazari
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    a=b=c=d=0;

    printf("Enter the value of a:",a);
    scanf("%d",&a);

    printf("Enter the value of b:",b);
    scanf("%d",&b);

    printf("Enter the value of c:",c);
    scanf("%d",&c);

    printf("Enter the value of d:",d);
    scanf("%d",&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("a is greatest\n");
            }
            else
            {
                printf("d is greatest\n");
            }
            
        }
        else
        {
            if (c>d)
            {
                printf("c is the greatest\n");
            }
            else
            {
                printf("d is the greatest\n");
            }
            
        }
        
    }
    else
    {
        if (b>c)
        {
            if (b>d)
            {
                printf("b is the greatest\n");
            }
            else
            {
                printf("d is the greatest\n");
            }
            
        }
        else
        {
            if (c>d)
            {
                printf("c is the greatest\n");
            }
            else
            {
                printf("d is the greatest\n");
            }
            
        }
        
        
    }
    
    return 0;
}

  
