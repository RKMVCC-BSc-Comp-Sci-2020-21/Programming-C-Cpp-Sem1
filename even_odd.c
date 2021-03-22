#include<stdio.h>
void even_odd(int n);
int main(){
	int a;
	printf ("\n Enter the number:");
	scanf("%d",&a);
	even_odd(a);
	return 0;
}

void even_odd(int n){
	if(n%2==0)
	printf("\n %d is even",n);
	else
	printf("\n %d is not even",n);
}
