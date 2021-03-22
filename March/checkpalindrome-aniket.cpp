/*Program to check palindrome of word*/
#include<stdio.h>
int main()
{
	char str[80];
	int len,i,flag=0;
	printf("\nEnter the characters: ");
	gets(str);
	for(len=0;str[len]!='\0';len++)
	for(i=0;i<len/2;i++)
		{
			if(str[i] !=str[len-i-1])
			{
				flag=1;
				break;
			}
		}
	
	if(flag==0)
	{
		printf("\nThe string is a palindreome!!");
	}
	else
	{
		printf("\nThe string is not a palindrome!!");
	}
		
	return 0;
}
