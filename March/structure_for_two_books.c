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
	struct book a,b;
	a.callno=100;
	strcpy(a.name,"LET US C");
	strcpy(a.author,"Kanetkar");
	a.price=150;
	
     printf("Book 1 Details: \n Call No.: %d\n Name: %s\n Author: %s\n Price: %f\n",a.callno,a.name,a.author,a.price);
     
	     
	b.callno=101;
	strcpy(b.name,"ANSI C");
	strcpy(b.author,"B GURU");
	b.price=175;
	
	 printf("Book 2 Details: \n Call No.: %d\n Name: %s\n Author: %s\n Price: %f\n",b.callno,b.name,b.author,b.price);
     return 0;
	
}
