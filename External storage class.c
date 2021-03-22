#include<stdio.h>
/* Global variable */
int a=10;
/* Prototype declaration */
void f();
void g();
int main(){
	printf("Global a= %d",a);
	f();
	g();
}
void f(){
	a++;
	printf("\n f: Global a=%d",a);
}
void g(){
	a=a*5;
	printf("\n g: global a=%d",a);
}
