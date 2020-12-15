#include <stdio.h>

int main()
{
    int A,B,C;
    printf("Enter the angles of triangle in degree: ");
    scanf("%d %d %d",&A,&B,&C);
    
    if((A+B+C)==180)
        printf("The triangle is valid");
    else
        printf("The traingle is not valid");
    
    return 0;
}
