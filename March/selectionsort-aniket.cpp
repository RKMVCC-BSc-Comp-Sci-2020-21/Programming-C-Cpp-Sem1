/*Program of selection sort method*/
#include<stdio.h>
int main()
{
	int arr[100],i,j,n,temp;
	printf("\nEnter number of elements of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element-%d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nsorted array[%d]= %d",i, arr[i]);
	}
	return 0;
}
