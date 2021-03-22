#include<stdio.h>
int main(){
	int ch;
	printf("\n Enter ch:");
	scanf("%d",&ch);
	switch(ch){
		case 4:
		  printf("\n Inside case 4");
		  break;
		case 2:
		  printf("\n inside case 2");
		  break;
		case 1:
		  printf("\n Inside case 1");
		  break;
		case 3:
		  printf("\n inside case 3");
		  break;
		default: printf("\n inside default");    
	}
	
}
