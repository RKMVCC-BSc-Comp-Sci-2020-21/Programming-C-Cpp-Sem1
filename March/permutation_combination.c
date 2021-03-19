/* This program computes the permutations and combinations of a given set of
objects. */
//Name:SOUMYA PAL Roll No:722

#include <stdio.h> 

int fact(int); 
int combination(int, int); 
int permutation(int, int); 

int main() 
{ 
int intN, intR, intC, intP; 
char ch; 
do {
do { 
printf("Enter the total no. of objects (1 <= n <= 7) :");
scanf("%d", &intN); 
} while ((intN < 1) || (intN > 7)); 

do { 
printf("Enter the no. of objects to be picked at a time ");
printf("(1 <= r <= %d) :", intN); 
scanf("%d", &intR); 
} while ((intR < 1) || (intR > intN)); 

intC = combination(intN, intR);
intP = permutation(intR, intR); 

printf("\nCombinations : %d", intC); 
printf("\nPermutations : %d", intP); 
fflush(stdin); 
printf("\nDo you want to continue? (Y/N) : ");
scanf("%c", &ch); 
} while ((ch == 'Y') || (ch == 'y')); 
printf("\nThank you.\n"); 

return 0; 
} 

int combination(int intN, int intR) 
{ 
int intC; 
intC = fact(intN) / (fact(intR) * fact(intN - intR)); 
return intC; 
} 

int permutation(int intN, int intR) 
{ 
int intP; 
intP = fact(intN) / fact(intN - intR); 
return intP; 
} 

int fact(int intN) 
{ 
int i; 
int facto = 1; 
for (i = 1; i <= intN; i++)
{ 
facto = facto * i; 
}
return facto; 
}
