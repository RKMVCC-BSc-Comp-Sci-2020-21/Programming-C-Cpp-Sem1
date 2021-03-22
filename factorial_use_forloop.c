#include<stdio.h>
int main(){
	int i,n,fact;
	printf("\n Enter the number : ");
	scanf("%d",&n);
	for(i=1,fact=1;i<=n;i++)
	fact=fact*i;
	printf("\n Factorial of given number : %d",fact);
	return 0;
}
