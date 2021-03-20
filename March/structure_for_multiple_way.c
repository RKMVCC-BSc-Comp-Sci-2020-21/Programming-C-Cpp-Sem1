#include<stdio.h>
#include<string.h>
#define MAX 25
struct book
{
	int callno;
	char name[10];
	char author[15];
	float price;
};
int main()
{
	struct book b[MAX];
	int n,i;
	printf("Enter the number of the books: ");
	scanf("%d",&n);
	printf("Enter the book details for: \n");
    for(i=0;i<n;i++)
    {
    	printf("Book number. %d:\n",i+1);
    	
    	printf("Call No: ");
    	scanf("%d",&b[i].callno);
    	
    	printf("Name: ");
    	fflush(stdin);
    	gets(b[i].name);
    	 
    	printf("Auhor: ");
    	gets(b[i].author);
    	
    	printf("Price: ");
    	scanf("%f",&b[i].price);
	}
	
    
  for(i=0;i<n;i++)
    {
    	printf("Book Details:\n______________________\n ");
    	printf("Book No: %d\n______________________\n",i+1);
    	printf("Call No: %d\n",b[i].callno);
    	printf("Name: %s\n",b[i].name);
    	printf("Author: %s\n",b[i].author);
    	printf("Price: %f\n",b[i].price);
    	
    
	}
	return 0;
}
