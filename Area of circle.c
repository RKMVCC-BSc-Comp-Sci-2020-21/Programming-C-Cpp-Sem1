#include<stdio.h>
#include<math.h>
#define PI 3.1415
int main(){
	float area,r;
	printf("\n Enter r:");
	scanf("%f",&r);
	area=PI*pow(r,2);
	printf("\n area of the circle : %f",area);
}
