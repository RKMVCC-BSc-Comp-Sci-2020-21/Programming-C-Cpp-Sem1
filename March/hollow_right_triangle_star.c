// Name:- Avirup Dutta, Roll t :- 721

//The code for the hollow right triangle star pattern is given below:

#include <stdio.h>  
  
int main()  
{  
    int n;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  
