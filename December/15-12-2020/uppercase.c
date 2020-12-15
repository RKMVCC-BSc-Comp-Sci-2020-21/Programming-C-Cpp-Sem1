#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    
    if(isupper(ch))
        printf("You have entered an Upper case character");
    else
        printf("You have enetered an lower case character");
        
    return 0;
}
