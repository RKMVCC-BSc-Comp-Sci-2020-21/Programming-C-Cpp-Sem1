//USEER DEFINED IMPLEMENTATIONN OF strlen()
 #include<stdio.h>

int main()
{
	char str[10];
	int len;
	int mystrlen(char *);
	printf("\n\tEnter a string :");
	gets(str);
	len= mystrlen(str);	
	printf("\n\tThe string contains %d characters.",len);
	return 0;
}
int mystrlen(char *str)
{
	int len=0;
	for(;*str !='\0';str++)
		len++;
	return len;
}
