// Program to reverse a given number using Recursion //

#include<stdio.h>
int main()
{
	int num, reverse_num;
	printf("\nEnter any num:");
	scanf("%d",&num);
	
	reverse_num = reverse_num;
	printf("\nAfter reverse the num is :%d",reverse_num);
	return 0;
}
int sum=0,rem;
reverse_num(int num){
	if(num){
		rem=num%10;
		sum=sum*10+rem;
		reverse_num(num/10);
	}
	else
	    return num;

}
