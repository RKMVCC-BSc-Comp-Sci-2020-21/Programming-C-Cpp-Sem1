#include <stdio.h>
int main(){
	int a=10;
	int *ptr;
	printf("\n Value stored in variable a:%d",a);
	printf("\n Address of a : %u",&a);
	ptr=&a;
	printf("\n content of ptr :%u",ptr);
	printf("\n Address of ptr :%u",&ptr);
	printf("\n Access a through ptr : %d",*ptr);
	return 0;
}
