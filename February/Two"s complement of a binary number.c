#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

int main()
{
	int i, carry = 1;
	
	char num[SIZE + 1], one_comp[SIZE + 1], two_comp[SIZE + 1];
	
	printf("Enter the binary number\n");
	gets(num);
	
	for(i = 0; i < SIZE; i++)
	{
	    if(num[i] == '0')
	    {
	        one_comp[i] = '1';
	    }
	    else if(num[i] == '1') 
	    {
	        one_comp[i] = '0';
	    }
	}
	one_comp[SIZE] = '\0';
	printf("Ones' complement of binary number %s is %s\n",num, one_comp);
	
	for(i = SIZE - 1; i >= 0; i--)
	{
	    if(one_comp[i] == '1' && carry == 1)
	    {
	        two_comp[i] = '0';
	    }
	    else if(one_comp[i] == '0' && carry == 1)
	    {
	        two_comp[i] = '1';
	        carry = 0;
	    }
	    else
	    {
	        two_comp[i] = one_comp[i];
	    }
	}
	two_comp[SIZE] = '\0';
	printf("Two's complement of binary number %s is %s\n",num, two_comp);
	return 0;
}
