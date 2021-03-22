#include<stdio.h>
int main(){
	auto int a=10;
	printf("a= %d",a);
	printf("\n Address(a): %u",&a);
	{
		auto int a=20;
		printf("\n inside block(a)= %d",a);
		printf("\n Address(a): %u",&a);
	}
}
