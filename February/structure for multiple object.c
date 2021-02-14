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
	printf("Enter the book details for: ");
    for(i=0;i<n;i++)
    {
    	printf("Book number. %d:\n",i+1);
    	
    	printf("Call No.: ");
    	scanf("%d",&b[i].callno);
    	
    	printf("Name.: ");
    	fflush(stdin);
    	fgets(b[i].name,10,stdin);
    	 
    	printf("Auhor.: ");
    	fgets(b[i].author,15,stdin);
    	
    	printf("Price.: ");
    	scanf("%f",&b[i].price);
	}
	
    
  for(i=0;i<n;i++)
    {
    	printf("Book details:\n__________________________________\n ");
    	printf("book no. %d:\n",i+1);
    	printf("call no.: %d\n",b[i].callno);
    	printf("name.: %s\n",b[i].name);
    	printf("name.: %s\n",b[i].author);
    	printf("price.: %f\n",b[i].price);
    	
    
	}
	return 0;
}
