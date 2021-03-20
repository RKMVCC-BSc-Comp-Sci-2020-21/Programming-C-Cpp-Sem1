#include <stdio.h>
#include <conio.h>
int main ()
{
	int i,n,arr[25],item,flag=0;
	//input the array length 
	printf ("Enter the length of the array: ");
	scanf ("%d",&n);
	//input the elements of the array 
	printf ("\nEnter the elements of the array : ");
	for (i=0;i<n;i++)
	   {
	   	scanf ("%d",&arr[i]);
	   	}
    printf ("\nThe elements of the array are : ");
	for (i=0;i<n;i++)
	    {
	     printf ("%d  ",arr[i]);
		}
	printf ("\nEnter the elements to be searched : ");
	scanf ("%d",&item);
	for (i=0;i<n;i++)
	 if (item==arr[i])
	    {
	    	printf ("\nThe element %d found at the position %d ",item,i+1);
	    	flag=1;
	    	    	
		}
    if (flag==0)
        printf ("The element could not be found !");
   return 0;
   		
}



