//USER DEFINED IMPLEMENTATION OF strcpy()
#include<stdio.h>


int main()
{
	char str1[10],str2[10];
	char* mystrcpy(char*,char*);
	printf("\n\tEnter the first string : ");
	gets(str1);
	printf("\n\tEnter the second string : ");
	gets(str2);
	
	mystrcpy(str1,str2);
	printf("\n\tThe first string now is : %s",str1);
	return 0;	
}
char* mystrcpy(char*s1, char*s2)
{
	for(;*s2!='\0';s1++,s2++)
		*s1=*s2;
	*s1='\0';
	return &s1[0];	//STARTING ADDRESS OF THE FIRST STRING
}
