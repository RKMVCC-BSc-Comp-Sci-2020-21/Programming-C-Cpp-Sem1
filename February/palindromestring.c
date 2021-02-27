The following program inputs a string and checks whether the string is a palindrome string or not
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	int i,j;
	char palindrome='T';	//FLAG VARIABLE
	
	printf("\n\tEnter a string : ");
	gets(str);
	
	for(i=0,j=strlen(str)-1 ; i<=j ;i++,j--)
	{
		if(str[i] !=str[j])
		{
			palindrome='F';
			break;
		}
	}
	if(palindrome=='T')
		printf("\n\tThe string is a palindrome.");
	else
		printf("\n\tThe string is not a palindrome.");
	return 0;
}
