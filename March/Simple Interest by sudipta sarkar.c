#include<stdio.h>

void main()
{
    
    float principal_amt, rate, simple_interest;
    int time;
    printf("Enter the value of principal amount, rate and time\n\n\n");
    scanf("%f%f%d", &principal_amt, &rate, &time);

   
    simple_interest = (principal_amt*rate*time)/100.0;

   
    printf("\n\n\t\t\tAmount = Rs.%7.3f\n ", principal_amt);

    printf("\n\n\t\t\tRate = Rs.%7.3f\n ", rate);
    printf("\n\n\t\t\tTime= %d years \n", time);
    printf("\n\n\t\t\tSimple Interest = Rs.%7.3f\n ", simple_interest);
   
    return 0;
}
