#include<stdio.h>
int main(){
	
	int n,i,sum;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n){
		sum=sum+i;
		printf("\n sum=%d",sum);
		i++;
	}
	return 0;
}
