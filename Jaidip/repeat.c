#include<stdio.h>
int main()
{
    char s[20];
    int countV=0,countC=0;

    printf("Enter a string: ");
    scanf("%s",s);
    int i=0;
    
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            countV++;
        }
        else
        {
            countC++;
        }

        i++;
        

    }

    printf("\nNumber of vowels = %d and consonants= %d",countV,countC);
    return 0 ;
}