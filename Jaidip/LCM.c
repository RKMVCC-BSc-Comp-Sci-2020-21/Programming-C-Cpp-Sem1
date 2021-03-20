#include<stdio.h>
int main()
{
    int a,b;
    long max;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    if(a>b)
       max=a;
    else
       max=b;
    

    while(1) 
    {
        if(max%a==0 && max%b==0)
        {    
            printf("LCM of two numbers is %ld",max);
            break;
        }
        max+=1;
    }
}