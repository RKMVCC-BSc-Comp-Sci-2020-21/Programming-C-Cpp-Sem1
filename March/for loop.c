// print your name 10 times 
#include <stdio.h>

int main ()
{
	int i,n;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++) //i=0 initialization ;i<10 checking termination condition ;
	//i++ increment toward termination condition
	{
		printf("\n %d. Computer Science",i+1);
	}
}
