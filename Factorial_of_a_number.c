#include<stdio.h>
int fact(int n){
	int res=1,i=1;
	while(i<=n){
		res=res*i;
		printf("\n res=%d",res);
		i++;
	}
	return(res);
}
int main(){
int n,result;
printf("\n Enter a number:");
scanf("%d",&n);
result=fact(n);
printf("\n Factorical of %d is %d ",n,result);
return 0;
}
