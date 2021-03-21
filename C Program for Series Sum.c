
/* C program to find the sum of the series :
S= x+x^2/2+x^3/3+…..+x^n/n
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int i,n;
float x,sum=0;
clrscr(); //to clear the screen

printf(“x+x^2/2+x^3/3+…..+x^n/n”);
printf(“\nEnter value of x and n:”);
scanf(“%f%d”,&x,&n);

for(i=1;i<=n;++i)
sum+=pow(x,i)/i;

printf(“\nsum=%f”,sum);
return 0; 
}
