#include<stdio.h>
int main(){
	int n=5,i=1,fact=1;
	int *pn=&n;
	int *pi=&i;
	while(*pi<=*pn){
		fact=fact*(*pi);
		(*pi)++;
	}
	printf("\n Factorial of 5 is : %d",fact);
	return 0;
}
