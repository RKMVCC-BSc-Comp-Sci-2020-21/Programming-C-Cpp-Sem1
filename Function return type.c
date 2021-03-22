#include<stdio.h>
int sum(int a,int b){
	int c;
	c=a+b;
	return(c);
}
int main(){
	int a,b,res;
	printf("\n Enter first number");
	scanf("%d",&a);
	printf("\n Enter first number");
	scanf("%d",&b);
	res=sum(a,b);
	printf("Result= %d",res);
	return 0;
}
