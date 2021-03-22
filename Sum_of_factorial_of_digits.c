#include<stdio.h>
int fact(int n){
	int res=1,i=1;
	while(i<=n){
		res=res*i;
		i++;
	}
	return (res);
}
int sum(int m){
	int rem,res=0;
	while(m>0){
		rem=m%10;
		res=res+fact(rem);
		printf("\n res=%d",res);
		m=m/10;
	}
	return (res);
}
int main(){
	int n,result;
	printf("\n Enter the number:");
	scanf("%d",&n);
	result=sum(n);
	printf("\n Final result: %d",result);
	return 0;
}
