#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char a[100];
	int len,i,vow=0,chr=0,word=0;
	
	printf("\nENTER A STRING: ");
	gets(a);
	 while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            word++;
            chr++;
        }
        else
            chr++;
        i++;
    }
    printf("\nNumber of characters: %d", chr);
    
	len=strlen(a);
	for(i=0;i<len;i++)
	{
                        if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
			vow=vow+1;
	}
	printf("\nTHERE ARE %d VOWELS IN THE STRING",vow);
	getch();
	return 0;
}
