/* Preprocessor directive preprocessor: 1:Macro Expansion , 2.File inclusion */
#include<stdio.h>  //File Inclusion
#define UB 15  /* UB : Macro Template ; 15 : Macro Expansion */
int main(){
	int i;
	for(i=1;i<=UB;i++)
	    printf("%d ",i);
	printf("\n");
	for(i=1;i<=UB;i++)
	    printf("%d ",2*i);
}
