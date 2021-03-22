#include<stdio.h>
void sum(int a,int b){
	int c;
	printf("\n Inside sum");
	printf("\n Address of a: %u",&a);
	printf("\n Address of b: %u",&b);
	c=a+b;
	printf("\n Sum of two number: %d",c);
	printf("\n Address of c: %u",&c);
}
int main(){
	int a,b;
	printf("\n Enter first number");
	scanf("%d",&a);
	printf("\n Enter first number");
	scanf("%d",&b);
	printf("\n inside main");
	printf("\n Address of a: %u",&a);
	printf("\n Address of b: %u",&b);
	sum(a,b);
	return 0;
}
