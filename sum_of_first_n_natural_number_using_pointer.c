#include<stdio.h>
int main(){
	int n=25,i=1,sum=0;
	int *pn,*pi;
	pn=&n;
	pi=&i;
	while(*pi<=*pn){
		sum=sum+*pi;
		*pi=*pi+1;
	}
	printf("\n Sum= %d",sum);
	return 0;
}
