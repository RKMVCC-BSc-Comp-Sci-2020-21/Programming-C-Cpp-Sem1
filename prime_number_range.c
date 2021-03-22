#include<stdio.h>
int main(){
	int n,i,prime,lb,ub, cnt=0;
	printf("\n enter lower bound :");
	scanf("%d",&lb);
	printf("\n enter uper bound :");
	scanf("%d",&ub);
	for(n=lb;n<=ub;n++){
		prime=1;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				prime=0;
				break;
			}
		}
		if(prime==1){
			printf("%d ",n);
			cnt++;
		}
	}
	printf("\n #prime : %d",cnt);
	return 0;
}
