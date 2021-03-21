#include<stdio.h>
#include<math.h>
int main()
{
    int a,j,flag=0,count=0;
   
    printf("Enter any number: ");
    scanf("%d",&j);
    int n= sqrt(j);
    flag=0;
    for(int i =2; i<=n;i++)
       { 
           if( j%i == 0)
            {
               flag=1;
               break;
            }
       }

    if(flag==1)
    {
      printf("The number is not prime");
    }
    else
    {
      printf("The number is prime");
    }

    return 0;

}