/*Program to print fibonacci series*/
#include<stdio.h>
int main()
{
	int n,i,ft=1,st=1,ct;
	printf("enter the number of fibonacci series: ");
	scanf("%d",&n);
	if(n==1)
	 printf("1\t");
	else if(n>=2)
	 printf("%d\t%d\t",ft,st);
	 for(i=3;i<=n;i++)
	{
		ct=ft+st;
		printf("%d\t",ct);
		ft=st;
		st=ct;
	}
	return 0;
}
