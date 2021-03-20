#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[20];
    int i=0;
    printf("Enter a string: ");
    scanf("%s",a);

    while(a[i]!='\0')
    {
         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
         {
              a[i]=toupper(a[i]);
         }
         i++;
    }
    printf("\nNew string %s",a);
    return 0;

}