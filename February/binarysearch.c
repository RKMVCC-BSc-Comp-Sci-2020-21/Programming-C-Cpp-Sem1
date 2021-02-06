/* In case of linear search, it is e is slower , especially towards the rear end .
The solution is to use binary  search method . However the pre requisite of this search is that the array must be sorted ,preferably in ascending order .*/
//binary search BY SOUBHAGYA PAUL 
#include<stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE];
	int i,n,j,temp;
	int low,high,mid;
	char found='F';
	for(i=0;i<SIZE;i++)
	{
		printf("\n\tEnter into index %d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE-1;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\tYou have entered : ");
	for(i=0;i<SIZE;i++)
		printf("\t%d",arr[i]);
	
	printf("\n\tEnter the number you want to search : ");
	scanf("%d",&n);
	low=0;
	high = SIZE;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(n<arr[mid])
			high=mid-1;
		else if (n>arr[mid])
			low=mid+1;
		else
		{
			found ='T';
			printf("\n\tthe number is found at index :%d",mid);
			break;
		}
	}
	if(found=='F')
		printf("\n\tThe number is not found .");
	return 0;	
}
