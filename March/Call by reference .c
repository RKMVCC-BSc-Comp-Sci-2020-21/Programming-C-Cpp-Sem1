#include<stdio.h>
#include<conio.h>
void change(int *num)   
{
    *num=*num+100;
    printf("After adding value inside function num=%d \n",*num);
}
int main()
{
	int x=100;
	printf("Before function call x=%d \n",x);
	change(&x);  // passing reference in function
	printf("After function call x=%d \n",x);
	return 0;
}