//program to find the average numbers using array
#include <stdio.h>
int main ()
{
	int marks [10], i,n,sum=0, average;
	printf ("enter number of elements:");
	scanf ("%d", &n);
	for (i=0; i<n; ++i)
	{
		printf ("enter number %d:", i+1);
		scanf ("%d", &marks[i]);
		sum+=marks[i];
		
	}
	average = sum/n;
	printf ("average =%d", average);
	return 0;
}
