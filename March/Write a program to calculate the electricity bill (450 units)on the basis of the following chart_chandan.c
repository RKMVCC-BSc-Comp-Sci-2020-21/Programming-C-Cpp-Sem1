/* Write a program to calculate the electricity bill (450 units)on the basis of the following chart.
              CONSUMING                RATE PER UNIT
                 0 - 100                      5/-
             For next 100 units               6/-
             For next 200 units               8/-
             For next any units              10/- */


#include<stdio.h>

main()

{
    int unit,bill;
    printf("Enter unit consume\n");
    scanf("%d",&unit);
    if (unit>=0 && unit<=100)
    {
      bill=unit*5;
    } 
   else if (unit>=101 && unit<=200)
    {
      bill=(100*5)+(unit-100)*6;
    } 
    else if (unit>=201 && unit<=200)
    {
      bill=(100*5)+(100*6)+(unit-200)*8;
    } 
    else  
    {
      bill=(100*5)+(100*6)+(200*8)+(unit-400)*10;
    } 
 printf("your bill is %d",bill);
 
}
