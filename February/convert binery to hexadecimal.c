#include<stdio.h>

int main(){
	
    long int binary_num,hexadecimal_num=0,i=1,rem;
	printf("Enter a binary number: ");
	scanf("%d",&binary_num);
	
	while(binary_num!=0)
	{
		rem=binary_num%10;
		hexadecimal_num=hexadecimal_num+rem*i;
		i=i*2;
		
	}
	printf("The Hexadecimal number is:%lx ",hexadecimal_num);
	
	return 0;
}
