#include<stdio.h>
int main(){
	int a=10;
	const b=20;
	printf("\n a=%d",a);
	a++;
	b++;    //in the above,line number 4 we decleared that b=consatnt=20
	printf("\n after modification a= %d and const b= %d",a,b);
	return 0;
}
