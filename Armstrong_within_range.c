#include<stdio.h>
#include<math.h>
int main(){
	int n,m,sum,r,lb,ub;
	printf("\n Enter lower bound: ");
	scanf("%d",&lb);
	printf("\n Enter upper bound: ");
	scanf("%d",&ub);
	for(m=lb;m<=ub;m++){
		n=m;
		for(sum=0;n>0;n=n/10){
			r=n%10;
			sum=sum+pow(r,3);
		}
		if(sum==m)
			printf("\n %d is an Armstrong number",m);
	}
	return 0;
}
