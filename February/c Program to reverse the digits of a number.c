#include<stdio.h>

 int main(){
    long int num,rev=0;
	int rem;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num!=0){
	
	 rem=num % 10;
	 rev=rev*10+rem;
	 num=num/10;
}
printf("%d",rev );
return 0;
 }
