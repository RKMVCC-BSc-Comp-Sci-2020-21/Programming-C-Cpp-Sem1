#include<stdio.h>

int main(void)
{
	int x,y;
	printf("enter two number: ");
	scanf("%d%d",&x,&y);
	if(x>y)
	{printf("the larger number is %d",x);
	}
	else
	{printf("the larger number is %d",y);
	}
	return 0;
}
