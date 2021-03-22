#include<stdio.h>
int main()
{
    int i, number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("\n\n\n\t\t\t%d is a perfect square\n\n\n", number);

            printf("\n\n\t\t\tCoding is Fun !\n\n\n");
            return 0;   
        }
    }
    printf("\n\n\n\t\t\t%d is not a perfect square\n", number);
  
    return 0;
}
