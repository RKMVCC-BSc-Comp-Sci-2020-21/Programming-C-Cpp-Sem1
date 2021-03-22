//By Dipmalya Hazari
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[1000];

    printf("enter the string :");
    gets(a);

    printf("the uppercasestring is :%s",strupr(a));
    
    return 0;
}
