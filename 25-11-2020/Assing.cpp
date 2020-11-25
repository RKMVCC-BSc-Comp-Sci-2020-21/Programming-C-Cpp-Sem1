#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0;
    printf("enter no. of terms (value of n): ");
    scanf("%d",&n);
    if(n<1 || n>50)
    {
        printf("\nConstraint violation!!\n");
        exit (0);
    }
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    }
    printf("\nsum of the first %d terms=%d\n",n,sum);
    return 0;
}

