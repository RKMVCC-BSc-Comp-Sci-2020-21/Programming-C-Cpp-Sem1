#include<stdio.h>
int sum(int a,int b){
	int c;
	c=a+b;
	return(c);
}
int main(){
	int a,b,res;
	printf("\n enter first number");
	scanf("%d",&a);
	printf("\n enter second number");
	scanf("%d",&b);
	res=sum(a,b);
	printf("result=%d",res);
	return 0;
}
