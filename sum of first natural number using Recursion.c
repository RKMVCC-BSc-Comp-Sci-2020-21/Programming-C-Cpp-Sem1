#include<stdio.h>
int sum(int n){
	if(n==0)
	    return(0);
	return n+sum(n-1);	 
}
int main(){
	int n,res;
	printf("\n Enter n:");
	scanf("%d",&n);
	res=sum(n);
	printf("\n Sum of the first %d natural number is : %d",n,res);
}
