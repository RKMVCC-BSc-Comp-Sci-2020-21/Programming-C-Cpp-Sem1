#include<stdio.h>
int main(void)
{
	int x,y;
	printf("enter two number: ");
	scanf("%d%d",&x,&y);
	if(x>y)
	{printf("the larger number is:%d",x);
	}
	else if(x<y)
	{printf("the larger number is:%d",y);
	}
	else
	{printf("the number is equal: %d");
	}
	return 0;
	
}
