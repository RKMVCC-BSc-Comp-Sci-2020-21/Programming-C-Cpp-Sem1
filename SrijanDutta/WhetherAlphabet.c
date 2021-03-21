#include <stdio.h>
int main(){
        char c;
        printf("Enter a character: ") ;
        scanf("%c", &c);
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
                printf("%c is an alphabet.", c) ;
        else
                printf("%c is not an alphabet.", c) ;
    return 0 ;
}
