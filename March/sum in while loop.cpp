#include <stdio.h>
int main()
{
	int i=1 , n , sum=0;
	printf("enter the lenth : ");
	scanf("%d",&n);
	
    while (i<=n)
      {
      	i= i+2; 
      	sum = sum + i;
      	i++;
	  }
	printf("the result :%d", sum);
	return 0;	
	     
}
