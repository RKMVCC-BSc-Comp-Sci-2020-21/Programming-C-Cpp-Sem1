#include<stdio.h>
int main(){
	int a=1;
	int b=2;
	switch(a+b){
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
