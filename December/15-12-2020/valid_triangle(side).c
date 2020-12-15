
#include <stdio.h>

int main()
{
    float s1,s2,s3;
    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f",&s1,&s2,&s3);
    
    if((s1+s2)>s3)
        printf("It is a valid triangle");
    else
        printf("It is not a valid triangle");
    
    return 0;
}
