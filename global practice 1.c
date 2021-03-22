#include<stdio.h>
int x=10;
int f(){
	int a=20;
	x=a;
	x++;
}
int main(){
	int b=40;
	x++;
	f();
	x++;
	printf("\n Global variable x=%d",x);
	return 0;
}
