#include <stdio.h>
int main()
{
	int a ;
	
	printf ("Enter the value for a :");
	scanf("%d" , &a );
	
	(a%2==0) ? printf("Even") :printf("Odd");
}
