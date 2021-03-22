#include <stdio.h>
int fact(int n){
	if(n==0||n==1)
	    return 1;
	else
	    return n*fact(n-1);
}
int main(){
	int n,res;
	printf("\n Enter the number:");
	scanf("%d",&n);
	res=fact(n);
	printf("\n Factorial of %d is : %d",n,res);
}
