#include<stdio.h>

int main(void)
{
	int x,y;
	printf("enter two numbers:");
	scanf("%d%d",&x,&y);
	if(x<y)
	{printf("the lower number is %d",x);
	}
	else
	{printf("the lower number is %d",y);
	}
	return 0;
}
