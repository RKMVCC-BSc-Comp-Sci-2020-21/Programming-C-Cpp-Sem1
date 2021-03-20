#include <stdio.h>
#include <conio.h>
int main ()
{
	int i, low, high, mid, n,item ,arr[25];
	printf ("Enter the length of the array :");
	scanf ("%d",&n);
	printf ("Enter the elements of the array in ascending order :");
	for (i=0;i<n;i++)
	  {
	  	scanf ("%d",&arr[i]);
	  	
	  }
	printf ("The elements of the array are :");
	for (i=0;i<n;i++)
	   {
	   	printf ("%d  ",arr[i]);
	   }
	printf ("\nEnter the elements to be searched : ");
	scanf ("%d",&item);
	low=0;
	high=n-1;
	while (low<=high)   
	    {
	    	mid=(low+high)/2;
	    	if (item>arr[mid])
	    	     low=mid+1;
	    	else if (item<arr[mid])
	    	     high=mid-1;
	    	else if (arr[mid]==item) 
			    {
				 printf ("The item %d found at location (position starts from 0) %d",item,mid);
				 break;
				}
				
		}
	if (low>high)
	printf ("The item could not be find ! please input correct item ");
	return 0;
	
	
	
	
	
	
	
}
