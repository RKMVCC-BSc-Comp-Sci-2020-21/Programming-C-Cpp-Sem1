#include<stdio.h>
int main()
{
    int num, bin=0, place=1,rem,temp;
    printf("Enter any decimal number: ");
    scanf("%d",&num);
    temp =num;

    while(num>0)
    {
        rem = num%2;
        bin = bin+ rem*place;
        num /=2;
        place *=10;
    }

    printf("The binary of %d is %d \n",temp,bin);

    return 0;
}
