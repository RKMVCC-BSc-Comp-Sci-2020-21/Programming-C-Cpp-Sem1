/* This program picks the prime numbers from a list of serial numbers with */
/* a range from 1 to 1000. */
//NAME:SOUMYA PAL Roll no:722

#include <stdio.h> 
#include <math.h> 
#define SIZE 1000 
int status[SIZE]; 
void sieve() 
{ 
int i, j, sq;
for(i = 0; i < SIZE; i++) { 
status[i] = 0; 
} 
sq = sqrt(SIZE); 

for(i=4;i<=SIZE;i+=2) { 
status[i] = 1; 
} 
for(i = 3; i <= sq; i += 2) 
{ 
if(status[i] == 0) 
{
for(j = 2*i; j <= SIZE; j += i) 
status[j] = 1; 
} 
} 
status[1] = 1; 
} 
int main() 
{ 
int i, intN; 
sieve(); 
do { 
printf("\n\nEnter the number (1 <= N <= 1000) : ");
scanf("%d",&intN); 
} while ((intN < 1) || (intN > 1000)); 
printf("\nFollowing numbers are prime in the range:     1 to %d :\n", intN); 
for (i = 1; i < intN; i++) 
if(status[i]==0) printf("%d\t", i); 
printf("\nThank you.\n");

    return 0; 

} 
