
#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i;
    printf("Enter the string = ");
    scanf("%s",s);

    for(i=0;s[i] != '\0';i++)
    {
        if(s[i] >= 'a' &&s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }



    printf("The upper case is = %s \n\n",s);
    return 0;
}
