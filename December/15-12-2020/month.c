#include <stdio.h>

int main()
{
    int month;
    do
    {
        printf("Please input any month number(1-12): ");
        scanf("%d",&month);
    }while(month<1 || month>12);
    
    if(month==2)
        printf("Number of days is 28(not leap year)");
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month ==10|| month ==12)
        printf("Number of days is 31");
    else
        printf("Number of days is 30");
    
    return 0;
}
