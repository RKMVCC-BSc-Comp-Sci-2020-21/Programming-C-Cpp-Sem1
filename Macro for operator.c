/* Use Macro for operator */
#include<stdio.h>
#define AND &&
#define OR ||
#define NOT !
int main(){
	int a=21,b=24;
	if(a>20 AND b>23)
	    printf("\n Inside first if");
	if(a>20 || b>23)
	    printf("\n Inside second if");
	if(a!=20)
	     printf("\n Inside third if");	    
}
