//USER DEFINED IMPLEMENTATION OF strcat()
#include<stdio.h>


int main()
{
	char str1[10],str2[10];
	char* mystrcat(char*,char*);
	printf("\n\tEnter the first string : ");
	gets(str1);
	printf("\n\tEnter the second string : ");
	gets(str2);
	
	mystrcat(str1, str2);
	printf("\n\tThe first string is now : %s",str1);
	
	return 0;
}
char* mystrcat(char*s1, char*s2)
{
	for(;*s1!='\0';s1++);
	for(;*s2!='\0';s1++,s2++)
		*s1=*s2;
	*s1='\0';
	return &s1[0];	//STRING ADDRESS OF THE FIRST STRING
}
