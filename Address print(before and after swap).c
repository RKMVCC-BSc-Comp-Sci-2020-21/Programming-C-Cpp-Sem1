/* Change that you make on formal argument does not reflected in actual argument */
#include<stdio.h>
void swap(int a,int b){
	int temp;
	printf("\n Inside swap address a=%u and b=%u",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n Inside swap after swap a=%d and b=%d");
}
int main(){
	int a=10,b=20;
	printf("\n Before swap a=%d and b=%d",a,b);
	printf("\n Inside main address a=%u and b=%u",&a,&b);
	swap(a,b);
	printf("\n Inside main after swap a=%d and b=%d");
	return 0;
}
