#include<stdio.h>
float main()
{
    int n, rem, sum=0;

    printf("Enter any number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;

    }

    printf("The sum of digits is: %d",sum);
    return 0;
}