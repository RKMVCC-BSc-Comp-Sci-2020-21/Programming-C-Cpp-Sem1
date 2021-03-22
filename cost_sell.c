#include<stdio.h>
int main(){
	
	float costp,sellp;
	printf("\n Enter cost price:");
	scanf("%f",&costp);
	printf("\n Enter selling price:");
	scanf("%f",&sellp);
	if(sellp>costp)
    printf("\n Profit amount:%f",sellp-costp);
	else
	printf("\n Loss amount:%f",costp-sellp);
	return 0;
}
