// Write a program in C++ to find out the sum of an A.P. series by  SOUBHAGYA PAUL

#include<stdio.h>

int main()
{
int i, n, d, term, sum = 0;



printf("\n\tEnter first term        : ");
scanf("%d", &n);

printf("\n\tEnter common difference : ");
scanf("%d", &d);

printf("\n\tEnter number of terms in series : ");
scanf("%d", &term);

printf("\n\tThe series : \n\t\t%d", n);

sum = sum + n;

for(i = 2 ; i <= term ; i++)
{
n = n + d;
printf("\n\t\t%d", n);
sum = sum + n;
}

printf("\n\tSum of series : %d", sum);

return 0;
}
