
#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i;
    int x = strlen(s);
    printf("Enter the string in uper case = ");
    scanf("%s",s);

    for(i=0;i<x;i++)                // for(i=0;s[i] !='\0';i++)
    {
        if(s[i] >= 65 &&s[i] <= 90)         // if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

                                                  /*  printf("\n\t %d \n",'a');    //97
                                                    printf("\n\t %d \n",'z');    //122
                                                    printf("\n\t %d \n",'A');    //65
                                                    printf("\n\t %d \n",'Z');    //90
                                                    */

    printf("The lower case is = %s \n\n",s);
    return 0;
}
