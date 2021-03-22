#include<stdio.h>
void swap(int a,int b){
	int temp;
	printf("\n inside swap address a= %u and b= %u",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n inside after swap a= %d and b= %d",a,b);
}
int main(){
	int a=10,b=20;
	printf("\n before swap a= %d and b= %d",a,b);
	printf("\n inside main address a= %u and b= %u",&a,&b);
	swap(a,b);
	printf("\n inside main after swap a= %d and b= %d",a,b);
	return 0;
}
