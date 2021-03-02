//THE FOLLOWING PROGRAM INPUTS YOUR FULL NAME AND PRINTS IT ACCORDING TO YOUR INITIALS BY SOUBHAGYA PAUL.
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
