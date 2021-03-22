#include<stdio.h>
int x=10;  // global variable
int f(){
int a=20;  // local variable
x=a;  // x=20
x++;  // x=21
}
int g(){
	int c=25;
	x=x+25;  // x=46
}
int main(){
	x++;  // x=11
	f();
	g();
	x++;  // x=47
	printf("\n Global variable x=%d",x);
	return 0;
}
