#include<stdio.h>
void inr(){
	static int i=1;
	printf("\n static i= %d",i);
	i++;
}
int main(){
	inr();
	inr();
	inr();
}
