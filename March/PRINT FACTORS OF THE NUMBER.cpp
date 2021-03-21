//TO READ A NUMBER5 FROM USER AND PRINT FACTORS OF THE NUMBER

#include<stdio.h>


int main ()
{    
    //VARIABLE DECLARATION
    int input, i;

	
	//Read input from user
	printf("Enter any number :");
	scanf("%d", & input);
	
	
	//Logic
	for (i=1 ;i<=input ; i++)
	{
		if (input%i==0)
		    printf("%d", i);
	}
	return 0;
}
