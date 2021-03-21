//THE FOLLOWING PROGRAM INPUTS YOUR FULL NAME AND PRINTS IT ACCORDING TO YOUR INITIALS.
#include<stdio.h>
#include<string.h>
/*
int main()
{
	char name[100];
	char word[5][20];
	int i,r,c;
	
	printf("\n\tEnter your name : ");
	gets(name);
	
	r=0;
	c=0;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i] != ' ')	//WHITE SPACE
		{
			word[r][c]=name[i];
			c++;
			
		}
		else
		{
			word[r][c]='\0';
			r++;
			c=0;
		}
	}
	word[r][c]='\0';
	printf("\n\tYour initials are : ");
	for(i=0;i<r;i++)
		printf("%c.",word[i][0]);
	printf("%s",word[r]);
	return 0;
}
*/

int main()
{
	char name[5] [10];	//5 STRINGS, EACH MAY CONTAIN 10 CHARACTERS
	char temp[10];
	int i,j;
	
	for(i=0;i<5;i++)
	{
		printf("\n\tENter name : ");
		gets(name[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("\n\tThe sorted names are : ");
	for(i=0;i<5;i++)
		printf("\n\t%s",name[i]);
	return 0;
}

/*
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
*/
/*
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
*/
/*
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
*/
/*
int main()
{
	char str[10];
	int len;
	int mystrlen(char *);
	
	printf("\n\tEnter a string :");
	gets(str);
	
	len= mystrlen(str);
	
	printf("\n\tThe string contains %d characters.",len);
	return 0;
}
int mystrlen(char *str)
{
	int len=0;
	for(;*str !='\0';str++)
		len++;
	return len;
}
*/
/*
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
*/
/*
int main()
{
	char str1[10],str2[10];
		
	printf("\n\tEnter first string : ");
	gets(str1);
	printf("\n\tEnter the second string : ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("\n\tThe first string now is : %s",str1);
	return 0;
}
*/
/*
int main()
{
	char str1[10],str2[10];
	
	printf("\n\tEnter first string : ");
	gets(str1);
	
	printf("\n\tEnter second string : ");
	gets(str2);

	strcpy(str1,str2);
	
	printf("\n\tThe first string now is : %s",str1);
	
	return 0;
	
}*/

/*int main()
{

	char str[10];
	int len;
	
	printf("\n\tEnter a string : ");
	gets(str);
	
	len = strlen(str);
	printf("\n\tThe string contains %d characters. ",len);
	
	return 0;
}*/
