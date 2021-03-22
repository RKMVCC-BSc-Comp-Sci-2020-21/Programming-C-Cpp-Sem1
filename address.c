#include<stdio.h>
void sum(int a,int b){
	int c;
	printf("\n inside sum");
	printf("\n address of a: %u",&a);
	printf("\n adress of b: %u",&b);
	c=a+b;
	printf("\n sum of two number: %d",c);
}
int main(){
	int a,b;
	printf("\n enter first number: ");
	scanf("%d",&a);
	printf("\n enter first number: ");
	scanf("%d",&b);
	printf("\n inside main");
	printf("\n address ofa: %u",&a);
	printf("\n address of b: %u",&b);
	sum(a,b);
	return 0;
}
