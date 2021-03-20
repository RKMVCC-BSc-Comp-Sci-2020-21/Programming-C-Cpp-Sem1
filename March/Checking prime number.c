// Checking prime number in c //

#include<stdio.h>
#include<conio.h>

int main(){
	
	int num, i, count=0;
	printf("Enter a number\n");
	scanf("%d", &num);
	
	for (i=2; i<num; i++)
	{
		if (num%i==0){
		        count++;
				break;	
		}
	}
	if(count==0)
	printf("\n It is a prime number");
	
	else
	printf("\n It is not a prime number");
	
	return 0;
}
