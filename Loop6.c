#include<stdio.h>
int main(){
	int lb,ub,i;
	printf("Enter lower bound:");
	scanf("%d",&lb);
	printf("Enter upper bound:");
	scanf("%d",&ub);
	i=lb;
	while(i<=ub){
		printf(" %d ",i);
		i++;
	}
	return 0;
}
