/*Program to insert a value in k th position*/
#include<stdio.h>
int main()
{
	int arr[100],i,n,num,k;
	printf("\nEnter the number of element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element-%d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter number to insert: ");
	scanf("%d",&num);
	printf("\nEnter position to insert: ");
	scanf("%d",&k);
	for(i=n-1;i>=k;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[k]=num;
	printf("\nAfter insert new value-------");
	for(i=0;i<n+1;i++)
	{
		printf("\nEnter element[%d]= %d",i,arr[i]);
	}
	return 0;
}
