/* 14-12-2020*/
/*datevalidation.c*/
#include<stdio.h>
int main(){
 int year,month,date,maxdays,leap;
 do{
		printf("Enter year (>=1)\n: ");
		scanf("%d",&year);
	}while(year<1);
     leap=(year%100)?((year%4)?0:1):((year%400)?0:1);

do{
	printf("Enter month(1-12)\n: ");
	scanf("%d",&month);
}while(month<1||month>12);

//how to calculate max days
  if (month==2){
	   if(leap){
		   maxdays=29;
	}
	else{
		maxdays=28;
	}
}
   else if(month==4||month==6||month==9||month==11){
    maxdays=30;
     }
else{
	maxdays=31;
}
do{
	printf("Enter date(1-%d)\n:",maxdays);
	scanf("%d",&date);
}while(date<1||date>maxdays);
    //06-08-2020
    //print date like
printf("\n\n\n\nDate is %02d-%02d-%04d",date,month,year);
return 0;
}
