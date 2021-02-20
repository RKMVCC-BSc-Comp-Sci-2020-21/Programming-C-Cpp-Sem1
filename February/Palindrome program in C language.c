#include<stdio.h>
#include<string.h>

 int main()
 {
 	char a[100],b[100];
 	
 	printf("Enter a string to check if it is a palindrom : ");
 	gets(a);
 	
 	strcpy(b, a);
 	strrev(b);
 	
 	if (strcmp(a,b) ==0)
 	printf("It is a palindrom \n");
 	
 	else
 	printf("It is not a palindrom\n");
 	
 	return 0;
 	
 }
 
