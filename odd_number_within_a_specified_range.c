#include<stdio.h>
int main(){
	int lb,ub,i;
	printf("\n Enter Lower bound:");
	scanf("%d",&lb);
	printf("\n Enter upper bound:");
	scanf("%d",&ub);
	printf("\n odd numbers are: ");
	for(i=lb;i<=ub;i++){
		if(i%2==1)
	    	printf("%d ",i);
	}
	return 0;
}
