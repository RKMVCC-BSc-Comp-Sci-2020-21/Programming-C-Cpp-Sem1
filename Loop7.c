#include<stdio.h>
int main(){
	int lb,ub,i;
	printf("Enter lower bound:");
	scanf("%d",&lb);
	printf("Enter upper bound:");
	scanf("%d",&ub);
	i=ub;
	while(i>=lb){
		if(i%2>0)
		printf(" %d ",i);
		i--;
	}
	return 0;
}
