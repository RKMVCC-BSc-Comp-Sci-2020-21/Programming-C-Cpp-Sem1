#include<stdio.h>
int main(){
	
	int n,sum=0;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	while(n>=1){
		sum=sum+n;
		printf("\n sum=%d",sum);
		n--;
	}
	return 0;
}
