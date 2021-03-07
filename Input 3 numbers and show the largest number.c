#include<stdio.h>
main(){
int a,b,c;
printf("Enter thre different value\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
	printf("%dis the largest\n",a);
}
else if(b>a&&b>c)
{
	printf ("%d is the largest\n",b);
}
else
{
	printf("%d is the largest\n",c);
}
}
