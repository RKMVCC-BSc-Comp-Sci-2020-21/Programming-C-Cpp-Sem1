#include <stdio.h>
#include <math.h>
int main(){
	int n,m,sum,r;
	printf("\n Enter the number: ");
	scanf("%d",&n);
	m=n;
	for(sum=0;n>0;n=n/10){
		r=n%10;
		sum=sum+pow(r,3);
		printf("\n n=%d r=%d sum=%d",n,r,sum);
	}
	if(sum==m)
	printf("\n %d is a armstrong number",m);
	else
	printf("\n %d is not a armstrong number",m);
	return 0;
}
