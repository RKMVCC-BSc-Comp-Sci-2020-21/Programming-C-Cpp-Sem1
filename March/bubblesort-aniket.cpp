/*Program of Bubble sort method*/
#include<stdio.h>
int main()
{
	int arr[100],i,j,n,temp=0;
	printf("Enter number of elements of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element-%d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nsorted array[%d]= %d",i,arr[i]);
	}
	return 0;
}
