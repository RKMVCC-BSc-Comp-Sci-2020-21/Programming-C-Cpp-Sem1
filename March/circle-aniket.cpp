/*program to find a perimeter and area of a circle*/
#include<stdio.h>
#define pie 3.142
int main()
{
	float r,A,P;
	printf("Enter the radius of a circle: ");
	scanf("%f",&r);
	P=2*pie*r;
	A=pie*r*r;
	printf("\nThe perimeter of that circle is %f",P);
	printf("\nThe area of that circle is %f",A);
	return 0;
}
