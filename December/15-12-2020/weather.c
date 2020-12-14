#include<stdio.h>
int main()
{
    int temp;
    printf("What is the temperature outside? ");
    scanf("%d",&temp);
    
    if(temp<0)
        printf("Freezing weather");
    else if(temp<=10)
        printf("Very cold weather");
    else if(temp<=20)
        printf("Cold weather");
    else if(temp<=30)
        printf("Normal temperature");
    else if(temp<=40)
        printf("It is hot");
    else
        printf("Very hot");
        
    return 0;
    
}
