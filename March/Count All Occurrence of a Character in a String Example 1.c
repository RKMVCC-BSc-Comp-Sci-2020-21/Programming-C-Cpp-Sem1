/* C Program to Count All Occurrence of a Character in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, Count;
  	Count = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Count++;
 		}
	}
	printf("\n The Total Number of times '%c' has Occured = %d ", ch, Count);
	
  	return 0;
}
