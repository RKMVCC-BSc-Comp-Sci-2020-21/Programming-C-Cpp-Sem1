//by Dipmalya Hazari
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int height;

    printf("Enter the height of the person in cm :",height);
    scanf("%d",&height);

    if (height<40 && height>10)
    {
        printf("the man is short\n");
    }
        if (height<80 && height>40)
        {
            printf("the man is medium\n");
        }
        if (height>=90 && height<170)
        {
            printf("the man is tall\n");
        }       
    return 0;
}
