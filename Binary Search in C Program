#include<stdio.h>
#include<conio.h>
int main()
{
	int i,first,last,mid,n,arr[25],item;
	printf("\n Enter the number of elements= \n");
	scanf("%d",&n);
	printf("Enter %d integers in sorted ascending order\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	} 
	printf("\nEnter the element to be searched:\n");
	scanf("%d",&item);
	first=0;
	last=n-1;
	while(first<=last)
	{
	  mid=(first+last)/2;
	  if(item>arr[mid])
		    first= mid+1; 
	  else if(item<arr[mid])
	        last= mid-1;
	  else if(arr[mid]==item)
	  {
	  	   printf("%d is found at location %d [position starts from 0]\n",item,mid);
	  	   break;
	  } 
	}
	if(first>last)
	  printf("Not found! %d is not found in the list \n",item);
	return 0;
}
