//USER DEFINED IMPLEMENTATION OF strcmp() BY SOUBHAGYA PAUL
#include<stdio.h>

int main()
{
	char str1[10],str2[20];
	int c;
	int mystrcmp(char*, char*);
	
	printf("\n\tEnter first string : ");
	gets(str1);
	
	printf("\n\tEnter second string : ");
	gets(str2);
	
	c=mystrcmp(str1,str2);
	if(c>0)
		printf("\n\tThe first string is greater.");
	else if(c<0)
		printf("\n\tThe second string is greater.");
	else
		printf("\n\tThe strings are equal.");
	return 0;
}
int mystrcmp(char *s1, char *s2)
{
	for(;*s1!='\0' && *s2!='\0';s1++,s2++)
	{
		if(*s1 !=*s2)
			return(*s1-*s2);
	}
	if(*s1 !='\0')
		return 1; 
	else if(*s2 != '\0')
		return -1;
	else
		return 0;
}
