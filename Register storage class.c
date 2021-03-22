#include<stdio.h>
int main(){
	auto int n,sum=0;
	register int i;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    sum=sum+i;
	printf("\n sum= %d",sum);    
}
