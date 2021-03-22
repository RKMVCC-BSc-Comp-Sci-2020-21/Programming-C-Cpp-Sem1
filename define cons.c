#include<stdio.h>
#define A 20
int main(){
	int a=10;
	printf("\n a= %d",a);
	printf("\n macro value A=%d",A);
	a=A;
	a++;
	printf("\n a=%d",a);
	return 0;
}
