#include<stdio.h>
int count_digit(int n){
	int cnt=0;
	while(n>0){
		cnt++;
		n=n/10;
		printf("\n n=%d and cnt=%d",n,cnt);
	}
	return(cnt);
}
int main(){
	int c,n=125692225;
	c=count_digit(n);
	printf("\n #digits: %d",c);
	return 0;
}
