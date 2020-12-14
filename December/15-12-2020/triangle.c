#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d",&s1,&s2,&s3);
    
    if((s1+s2)>s3){
        if(s1==s2==s3)
            printf("It is an equilateral triangle");
        else if(s1==s2||s2==s3||s1==s3)
            printf("It is an isosceles triangle");
        else
            printf("It is a scalene triangle");
    }
    else
        printf("Invalid Entry");
        
    return 0;
    
}
