#include<stdio.h>
int main(){
	int i=0;
	for(printf("\n initial");printf("\n condition");printf("\n updation")){
		printf("\n inside for loop");
		i++;
		if(i==2)
		break;
	}
	printf("\n outside for loop");
}
