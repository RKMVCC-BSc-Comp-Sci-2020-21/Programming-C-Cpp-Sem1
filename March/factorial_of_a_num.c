//FACTORIAL OF A NUMBER
//Name:SOUMYA PAL Roll No:722

#include<stdio.h>
int main()
{
    int fact,num,i;
    printf("enter the number:");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("the factorial value of %d is:%d\n",num,fact);
    return 0;
}
