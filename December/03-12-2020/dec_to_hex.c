#include<stdio.h>
int main()
{
    int num,rem,i=0;
    char hex[20];

    printf("Enter any decimal number: ");
    scanf("%d",&num);

    while(num>0)
    {
        rem = num %16;

        if(rem<10)
        {
            hex[i]=rem+48; //converts the integer to its character value 
                          // adding 48 gives it respective ASCII character           
            i+=1;
        }
        else
        {
            hex[i]=rem+55; //Converts the integer to the resepective hex value
                           //adding 58 gives the respective ASCII character 
            i+=1;
        }

        num /=16;     
    }

    //Printing the array in reverse order
    printf("The hexadecimal eqivalent is: ");
    for(int j=i-1;j>=0;j--)
        printf("%c",hex[j]);

    return 0;
}
