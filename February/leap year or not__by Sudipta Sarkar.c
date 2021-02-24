#include<stdio.h>
int main(int argc, char *argv[])
{
    int year;

    printf("Enter the year = ");
    scanf("%d",&year);

    if(year%100!=0)
    {
        if(year%4==0)
        {
            printf("Enter year is leap year\n");

        }
        else {
            printf("Enter year is not leap year\n");
        }
    }

    else
    {
        if(year%400==0)
        {
            printf("Enter year is leap year\n");

        }
        else {
            printf("Enter year is not leap year\n");
        }
    }
    return 0;
}
