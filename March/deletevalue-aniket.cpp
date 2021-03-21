/*Program to delete a value of k th position*/
#include<stdio.h>
int main()
{
	int arr[100],i,n,k;
	printf("\nEnter the number of element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element-%d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter position which value to be deleted: ");
	scanf("%d",&k);
	for(i=k;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("\nAfter deletion--------");
	for(i=0;i<n-1;i++)
	{
		printf("\nEnter element[%d]= %d",i,arr[i]);
	}
	return 0;
}
