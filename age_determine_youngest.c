#include<stdio.h>
void min(int ram,int shyam,int ajay){
	if(ram<shyam && ram<ajay)
	printf("\n Ram is youngest");
		else if(shyam<ram && shyam<ajay)
		printf("\n Shyam is youngest");
		else
		printf("\n Ajay is youngest");
}
int main(){
	int ram,shyam,ajay;
	printf("\n Enter age of Ram:");
	scanf("%d",&ram);
	printf("\n Enter age of Shyam:");
	scanf("%d",&shyam);
	printf("\n Enter age of Ajay:");
	scanf("%d",&ajay);
	min(ram,shyam,ajay);
	return 0;
}
