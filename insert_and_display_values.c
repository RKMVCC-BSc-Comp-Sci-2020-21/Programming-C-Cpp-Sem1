#include<stdio.h>
int main(){
	int a[10];
	int i,n;
	printf("\n Enter number of values : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n Arrey elements are:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
