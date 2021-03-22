#include<stdio.h>
int exn(int a,int n){
	if(n==0)
	    return 1;
	else
	    return a*exn(a,n-1);  
}
int main(){
	int a,n;
	printf("\n Enter a:");
	scanf("%d",&a);
	printf("\n Enter n : ");
	scanf("%d",&n);
	printf("\n exn(%d,%d) = %d",a,n,exn(a,n));
}
