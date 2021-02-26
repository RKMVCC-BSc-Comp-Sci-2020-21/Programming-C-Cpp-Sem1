#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet = ");
    scanf("%c",&ch);

    switch (ch) {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Alphabet is Vowel\n");
        break;

    default:
        printf("Alphabet is Consonant\n");

    }

    return 0;
}
