// read the age of a candidate and determine whether it is //eligible for casting his/her own vote.
#include<stdio.h>
int main()
{
	int age;
	printf("\n\tEnter your age : ");
	scanf("%d",&age);
	if(age >=19)
	printf("\n\tCandidate is eligible for casting his/her own vote. ");
	else
	printf("\n\tCandidate is not eligible for casting his/her own vote.");
	return 0;	}
