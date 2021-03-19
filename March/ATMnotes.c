//7.Write a C/C++ program to count total number of notes in given amount.

#include<stdio.h>

int main()
{
	int amount;
	printf("\n\tEnter an amount of rupees : ");
	scanf("%d", &amount);
	printf("\n\tRs 2000 Note : %d", amount/2000);
	amount = amount % 2000;
	printf("\n\tRs 500 Note : %d", amount/500);
	amount = amount % 500;
	printf("\n\tRs 200 Note : %d", amount/200);
	amount = amount % 200;
	printf("\n\tRs 100 Note : %d", amount/100);
	amount = amount % 100;
	printf("\n\tRs 50 Note : %d", amount/50);

	amount = amount % 50;
	printf("\n\tRs 20 Note : %d", amount/20);
	amount = amount % 20;
	printf("\n\tRs 10 Note : %d", amount/10);
	amount = amount % 10;
	printf("\n\tRs 5 Note : %d", amount/5);
	amount = amount % 5;
	printf("\n\tRs 2 Note : %d", amount/2);
	amount = amount % 2;
	printf("\n\tRs 1 Note : %d", amount);
	
  printf("\n\n\tBY Soubhagya Paul");
  
  return 0;
}
