#include<stdio.h>
int main()
{
	int num;
	double total;
	char gender;
	printf("Enter a number:   ");
	scanf("%d",&num);
	printf("Enter the total:   ");
	scanf("%lf",&total);
	getchar();
	printf("Enter the gender:  ");
	gender=getchar();
	printf("Number: %d \n",num);
	printf("Total: %lf\n",total);
	printf("Gender: %c\n",gender);
	return 0;
}
