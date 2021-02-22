//Name:- Avirup Dutta  ,  Roll No:-721

//show lowercase and uppercase word

// 97-122-->lowercase
// 65-90-->uppercase

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a charecter: ");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("the charecter is a lowercase \n");
    }
    else if (ch <= 90 && ch >= 65)
    {
        printf("The charecter is a uppercase \n");
    }
    else
    {
        printf("Invalid charecter\n");
    }
    return 0;
}
