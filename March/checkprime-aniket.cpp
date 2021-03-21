/*Program to check a number prime or not*/
#include<stdio.h>
void prime(int a)
{
	int i,flag=1;
	float m=a/2;
	for(i=2;i<=m;i++)
	{
		if(a%i==0)
		{  	flag=0;
			break;
		}
	}
	    if(a<=0)
	    {flag=0;
		}
		else if(a==2)
		{flag=1;
		}
		if(flag==0)
		{printf("\nNumber is not Prime");
		}
		else
		printf("\nnumber is a prime");
	
}
int main()
{
	int a;
	printf("Enter Number to check prime: ");
	scanf("%d",&a);
	prime(a);
	return 0;
}
