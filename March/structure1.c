#include<stdio.h>
#include<string.h>
struct book
{
	int callno;
	char name[10];
	char author[15];
	float price;
};
int main()
{
	struct book b;
	b.callno=100;
	strcpy(b.name,"LET US C");
	strcpy(b.author,"Kanetkar");
	b.price=150;
	
     printf("Book Details: \n  Call No.: %d\n  Name: %s\n  Author: %s\n  Price: %f\n",b.callno,b.name,b.author,b.price);
     return 0;
}
