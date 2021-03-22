#include<stdio.h>
int main(){
	int arr[5];
	int i;
	for(i=0;i<=4;i++)
	printf("\n address arr[%d] is %u ",i,&arr[i]);
	return 0;
}
