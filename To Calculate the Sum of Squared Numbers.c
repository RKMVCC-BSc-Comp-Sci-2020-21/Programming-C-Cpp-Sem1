// Calculate the sum, S = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 +.........+ n^2

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the length:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	        {
	        	sum=sum+pow(i,2);
	        	i++;
	        }
   printf("The result is=%d",sum);
   return 0;
}
