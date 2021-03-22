#include<stdio.h>
int reverse(int n){
	int r,rev=0;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return(rev);
}
int main(){
	int n,rev;
	printf("\n Enter the number:");
	scanf("%d",&n);
	rev=reverse(n);
	if(n==rev)
	    printf("\n Given numbe is palindrome");
	else
    	printf("\n Not palindrome");
	return 0;
}
