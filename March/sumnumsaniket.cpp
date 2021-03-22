/*SUm of numbers*/
#include<stdio.h>
int main()
{
	int a,count=0;
	int sum=0;
	printf("Enter Numbers to Sum:\n");
	while(count!=6)
	{
	 	scanf(" %d",&a);
	 	sum=sum+a;
	 	count++;
	}
	printf("\nSum of the numbers %d",sum);
	return 0;
}
