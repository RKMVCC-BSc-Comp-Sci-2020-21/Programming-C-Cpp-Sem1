//MULTIPLICATION TABLE OF 12
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>

#define COLMAX 12
#define ROWMAX 10
int main()
{ 
   int row,column,y;
   row = 1; 
   printf("        MULTIPLICATION TABLE         \n");
   do
   {
       column=1;
       do
       {
         y= row * column;
         printf("%4d",y);
         column= column+1;
       } 
         while(column<=COLMAX);
         printf("\n");
         row=row+1;
   } 
   while(row<=ROWMAX);
   return 0;
}   
