#include <stdio.h>

#define DAYS 7

void main()

{

    int ndays, year, week, days;

    printf("Enter the number of days\n");

    scanf("%d", &ndays);

    year = ndays / 365;

    week = (ndays % 365) / DAYS;

    days = (ndays % 365) % DAYS;

    printf("%d is equivalent to %d years, %d weeks and %d daysn",

           ndays, year, week, days);
}