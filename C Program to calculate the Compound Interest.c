// C Program to Calculate the Compound Interest

#include<stdio.h>
 
int main() {
	
	float p,r,t,CI;
	
	printf("Enter the Principle, rate and time\n");
	scanf("%f%f%f",&p,&r,&t);
	
	CI = p*pow((1+r/100),t);   // Formula for calculating Compound Interest
	
	printf("Compound interest of %f is = %f\n",p,CI);

return 0;
}
