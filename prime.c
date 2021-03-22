#include<stdio.h>
int main(){
	int n,i,prime=1;
	printf("\n Enter the number: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			prime=0;
			break;
		}
	}
	if(prime==1)
	printf("\n %d is a prime number",n);
	else
	printf("\n %d is non prime",n);
	return 0;
}
