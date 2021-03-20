/*Program to find vowels and consonent*/
#include<stdio.h>
#include<string.h>
int main()
{ 
    char s[50];
	int count=0,cons=0,c=0,b=0;
	printf("Input a string:\n");
	gets(s);
	while(s[c]!='\0')
	{
	if(s[c]=='A'||s[c]=='E'||s[c]=='I'||s[c]=='O'||s[c]=='U'||s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u')
		{
			count++;
		}
   else if(s[c]==' ')
	 {
	   b++;	
	 }
	else
	{
		cons++;
	}
		c++;   
	}
	printf("Numbers of vowels are: %d\n",count);
	printf("Numbers of consonents are: %d\n",cons);
	return 0;
}
