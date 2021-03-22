#include<stdio.h>
int main(){
	int a=300,b=10,c=20;
	if(a>=400)  // false
	b=300;  // inside if
	c=200;  // outside if
	printf ("\n b=%d c=%d",b,c);
	return 0;
}
