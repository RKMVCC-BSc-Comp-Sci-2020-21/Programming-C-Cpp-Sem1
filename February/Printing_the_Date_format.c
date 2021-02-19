#include<stdio.h>

int main()
{
    int year,leapyear,month,maxdays,days;
    do
    {
        printf("ENTER THE YEAR (YEAR>=1)\n");
        scanf("%d",&year);

    }while(year<1);
    leapyear=(year%100)?((year%4)?0:1):((year%400)?0:1);
    //if(leapyear)
        //printf("THE YEAR ENTERED BY YOU IS %d IS A LEAPYEAR\n",year);
  // else
       // printf("THE YEAR ENTERED BY YOU IS %d NOT A LEAP YEAR\n",year);
   do
    {
        printf("ENTER THE MONTH NUMBER\n");
        scanf("%d",&month);

    }while(month<1||month>12);
    if(month==2)
    {
        if(leapyear)
            maxdays=29;
        else
            maxdays=28;

    }
    else if(month==4||month==6||month==9||month==11)
        maxdays=30;
    else
        maxdays=31;
    do
    {
        printf("ENTER THE NUMBER OF DAYS 1-%d\n",maxdays);
        scanf("%d",&days);

    }while(days<=0||days>maxdays);
    printf("\n\n\nTHE DATE IS IN DD-MM-YYYY FORMAT IS HERE %d-%d-%d\n",days,month,year);

 return 0;
}
