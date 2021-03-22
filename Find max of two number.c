#include<stdio.h>
int find_max(int m,int n){
	int max;
	if(m>n)
	    max=m;
	else
	    max=n;
	return(max);    
}
int main(){
	int m,n,max;
	printf("\n Enter first number:");
	scanf("%d",&m);
	printf("\n Enter second number:");
	scanf("%d",&n);
	max=find_max(m,n);
	printf("\n Max=%d",max);
	return 0; 
}
