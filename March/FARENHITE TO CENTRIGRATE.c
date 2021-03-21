// CONVERT FARENHITE TO CENTRIGRATE

#include<stdio.h>
int main()
{
	float c,fh;
	
	printf("Enter temparature in Fahrenheit\n");
	scanf("%f",&fh);
	
	c= (fh-32) / 1.8;
	
	printf("Temperature in Degree Celcius is %f\n", c);
	
	return 0;
}
