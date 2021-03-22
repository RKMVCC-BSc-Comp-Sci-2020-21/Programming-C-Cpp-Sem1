/* Macro with argument */
#include<stdio.h>
#define F(x) (x+x)
int main(){
	int a=10,res;
	res=F(a);
	printf("res : %d",res);
}
