// Using user defined function //
#include<stdio.h>
void sum(int a,int b){
	int c;
    c=a+b;
    printf("\n Sum of two number:%d",c);
}
int main(){
	int a,b;
	printf("\n Enter first number");
	scanf("%d",&a);
	printf("\n Enter first number");
	scanf("%d",&b);
	sum(a,b);
	return 0;
}
