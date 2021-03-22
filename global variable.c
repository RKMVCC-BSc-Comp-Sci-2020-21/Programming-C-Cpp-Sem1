#include<stdio.h>
int x=10;
int f(){
	int a=20;
	printf("\n f: address(a): %u",&a);
	printf("\n f: address(x): %u",&x);
}
int main(){
	int b=40;
	printf("\n main: address(b): %u",&b);
	printf("\n main: address(x): %u",&x);
	f();
	return 0;
}
