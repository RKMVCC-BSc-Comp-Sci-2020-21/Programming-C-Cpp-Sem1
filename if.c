#include <stdio.h>
int main(){
	int m,max,n;
	printf("\n enter first number:");
	scanf("%d",&m);
	printf("\n enter second number:");
	scanf("%d",&n);
	if(m>n)
	max=m;
	else
	max=n;
	printf("\n max element is: %d",max);
	return 0;
}
