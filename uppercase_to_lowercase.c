//by Dipmalya Hazari
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100];

    printf("enter the string :");
    gets(a);

    printf("the uppercase string is %s:",strlwr(a));

    return 0;
}
