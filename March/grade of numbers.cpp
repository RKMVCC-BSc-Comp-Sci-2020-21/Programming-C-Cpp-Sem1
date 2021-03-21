#include<stdio.h>
#include<math.h>
int main(void)
{
	int b,e,m,h,g,tot;
	float avg;
	printf("enter the marks of bengali:");
	scanf("%d",&b);
	printf("enter the marks of english:");
	scanf("%d",&e);
	printf("enter the marks og math:");
	scanf("%d",&m);
	printf("enter the marks of history:");
	scanf("%d",&h);
	printf("enter the marks of geography");
	scanf("%d",&g);
	
	tot = b+e+m+h+g;
	avg = (float)tot/5 ;
	
	printf("\n total marks of student :%d",tot);
	printf("\n avarage number:%f",avg);
	
	if(avg>=60)
	  printf("grade A\n");
	if (avg<60 && avg>=40)
	  printf("grade B\n");
	if (avg<40 && avg>=30)
	  printf("grade C\n");
	if  (avg<30)
	  printf("FAIL!!!\n");
return 0;	        
	
	
	
}
