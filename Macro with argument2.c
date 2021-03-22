/* Macro with argument */
#include<stdio.h>
#define F(x) (x*x)
int main(){
	int a=5,res;
	res=F(5+5); //5+5*5+5
	printf("res : %d",res);
}
