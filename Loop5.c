#include<stdio.h>
int main(){
	int lb,ub;
	printf("Enter lower bound:");
	scanf("%d",&lb);
	printf("Enter upper bound:");
	scanf("%d",&ub);
	while(lb<=ub){
		printf(" %d ",lb);
		lb++;
	
	}
	return 0;
}
