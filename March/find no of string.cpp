// C orC++ Program to find the repetitive and non-repetitive character in a
// given string.

#include<stdio.h>

int main()
{
	char str[100];
	int freq[26];
	int i;

	for(i = 0 ; i < 26 ; i++)
		freq[i] = 0;

	printf("\n\tEnter string : ");
	gets(str);

	for(i = 0 ; i < strlen(str) ; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			freq[str[i]-65]++;
		else if(str[i] >= 'a' && str[i] <= 'z')
			freq[str[i]-97]++;
	}

	printf("\n\tFrequency of characters (both case): ");

	for(i = 0 ; i < 26 ; i++)
	{
		if(freq[i] > 0)
			printf("\n\t\t%c appears %d time(s).", i+65, freq[i]);
	}

return 0;
}

