#include<stdio.h>
#include<stdlib.h>
 
int main()
{ 
      int dd, mm, yy;
      int count, n;
      int day, month, year;
      printf("\nInput the Current Date in Numbers\n");
      printf("Date:\t");
      scanf("%d", &dd);
      printf("Month:\t");
      scanf("%d", &mm);
      printf("Year:\t");
      scanf("%d", &yy);
      if(dd > 31 || mm > 12)
      {
            printf("\nPlease Enter the Correct Date!!!!\n");
            exit(0);
      }
      year = yy - 1900;
      year = year / 4;
      year = year + yy -1900;
      switch(mm)
      {
            case 1: month = 1;
                    break;
            case 2: month = 4;
                    break;
            case 3: month = 4;
                    break;
            case 4: month = 0;
                    break;
            case 5: month = 2;
                    break;
            case 6: month = 5;
                    break;
            case 7: month = 0;
                    break;
            case 8: month = 3;
                    break;
            case 9: month = 6;
                    break;
            case 10: month = 1;
                     break;
            case 11: month = 4;
                     break;
            case 12: month = 12;
                     break;
      }
      year = year + month;
      year = year + dd;
      day = year % 7;
      switch(day)
      {
            case 0: printf("\nDay:\tSaturday\n");
                    break;
            case 1: printf("\nDay:\tSunday\n");
                    break;
            case 2: printf("\nDay:\tMonday\n");
                    break;
            case 3: printf("\nDay:\tTuesday\n");
                    break;
            case 4: printf("\nDay:\tWednesday\n");
                    break;
            case 5: printf("\nDay:\tThursday\n");
                    break;
            case 6: printf("\nDay:\tFriday\n");
                    break;
      }
      return 0;
}

