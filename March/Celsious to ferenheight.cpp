//CONVERT CELCIUS INTO FARENHITE

#include<stdio.h>
int main()
{
	float celcius;
	float farenheit;
	printf("Enter temparature in celcius : ");	
	scanf("%f", & celcius );
	//(1.8)*celcius+32
	farenheit = (1.8) * celcius + 32;

	printf("farenheit=%f");
	
	return 0;
}
