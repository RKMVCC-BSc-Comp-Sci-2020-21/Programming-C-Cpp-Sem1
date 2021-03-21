/*
 How to print the following pattern(letter) using loop:
A
AB
ABC
ABCD   
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n How many lines?");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	    	printf("%c",j+64);
       }
	   printf("\n");
    }
	return 0;
}
