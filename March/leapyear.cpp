#include <stdio.h>
int main(void)
{
	int y;
	printf("enter a year:\n");
	scanf("%d",&y);
	if (y%400==0||(y%100!=0 &&y%4==0))
	  printf("the year is leap year");
	else 
	  printf("the year is not a leap year");

return 0;	    
}
