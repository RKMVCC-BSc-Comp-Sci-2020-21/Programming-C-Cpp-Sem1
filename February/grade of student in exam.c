#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Enter the number of the student: ");
	scanf("%d",&n);
	if(n>=90&&n<=100)
	
	   printf("Grade:O,OUTSTANDING");
    else if(n>=80&&n<=89)
    
       printf("Grade :A+,EXELLENT");
    else if(n>=70&&n<=79)
       
       printf("Grade:A,VERY GOOD");
    else if(n>=60&&n<=69)
    
       printf("Grade:B,GOOD");	
    else if(n>=50&&n<=59)
    
       printf("Grade:C,SATISFACTORY");
    else if(n>=40&&n<=49)
    
       printf("Grade:D,BAD");
    else
        printf("FAIL");
        
return 0;
    
	
}
