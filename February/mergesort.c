//merge sort
#include<stdio.h>
#define SIZE 5

int main()
{
	int a[SIZE],b[SIZE],c[SIZE];
	int i,j,k;
	printf("\n\tEnter into first array in ascending order :");
	for(i=0;i<SIZE;i++)
	{
		printf("\n\tEnter into index %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\tEnter into second array in ascending order : ");
	for(j=0;j<SIZE;j++)
	{
		printf("\n\tEnter into index %d : ",j);
		scanf("%d",&b[j]);
	}
	i=0;
	j=0;
	k=0;
	while(i<SIZE && j<SIZE)
	{
		if(a[i] < b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else if (a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else 			//DUPLICATION ARE TAKEN ONLY ONCE 
		{
			c[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	if(i<SIZE)
	{
		while (i<SIZE)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
	else if (j<SIZE)
	{
		while(j<SIZE)
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	printf("\n\tThe merged array is : ");
	for(i=0;i<k;i++)
		printf("\t%d",c[i]);
	return 0;
}
