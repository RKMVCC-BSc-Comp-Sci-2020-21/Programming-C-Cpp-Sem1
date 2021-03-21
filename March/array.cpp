#include <stdio.h> 
void INSERTION(int a[],int , int);
int DELETION(int a[],int ,int);
void TRAVERSE(int a[],int);

int main()
{
	int arr[20],i,j,n,pos,key,del;
	printf ("\nEnter how many element to insert into the array[<20] : ");
	scanf("%d", &n);
	//o	Sequential insertion
	for(i=0;i<n;i++)
	{
		printf ("\n Enter the element Arr[%d]=",i);
		scanf("%d", &arr[i]);
	}
	TRAVERSE(arr,n); // only send array name as it send base address of it
	printf ("\nInsert another element:");
	printf("\n Enter the position where you want to insert : ");
	scanf("%d", &pos);
	INSERTION(arr,n,pos);
	n=n+1;
	TRAVERSE(arr,n);
	printf ("\n Enter the element want to delete from an array : ");
	scanf("%d",&key);
	del=DELETION(arr,n,key);
	n=n-1;
	printf ("\n%d is deleted from the array ",del);
	printf ("\n The current array is \n");
	TRAVERSE(arr,n);
}
void INSERTION(int a[],int m , int loc)
{
	int index=loc-1, key,i;
	i=m-1;
	while (i>=index)
	{
		a[i+1]=a[i];
		i--;
	}
	printf ("\n Enter the value to insert:");
	scanf("%d",&key);
	a[index]=key; // insertion
}

int DELETION(int a[],int m,int key)
{
	int i,loc;
	// searching
	for (i=0;i<m;i++)
	{
		if (a[i]==key)
		{
			loc=i;
			break; //will discontinue the loop once the element is found
		}
	}
	// deleting
	while (loc <m-1)
	{
		a[loc]=a[loc+1];
		loc++;
	}
	return(key);
}
void TRAVERSE(int a[],int m)
{
	int i;
	printf ("\n The element of the array....\n");
	for(i=0;i<m;i++)
	{
		printf ("%d,",a[i]);
	}
  return 0;
  
}

