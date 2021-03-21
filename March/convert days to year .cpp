#include <stdio.h>
#define DAYSINWEEK 7
 
void main()
{
    int ndays, year, week, days;
 
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) / DAYSINWEEK;
    days =(ndays % 365) % DAYSINWEEK;
    printf ("%d is equivalent to %d years, %d weeks and %d daysn",
            ndays, year, week, days);
}
