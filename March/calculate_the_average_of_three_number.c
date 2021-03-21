#include<stdio.h>
int main()
{
	int x,y,z;
	float avg;
	printf("enter three number:");
	scanf("%d%d%d",&x,&y,&z);
	avg=(float)(x+y+z)/3;
	printf("the average is:%f",avg);
	return 0;
	
}
