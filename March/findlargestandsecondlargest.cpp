//Program to find largest and second largest element of an array//
#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,i;
	int max1,max2;
	cout<<"The size of array: ";
	cin>>size;
	cout<<"Enter elements of an array:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]>max1)
		{   max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2 && arr[i]<max1)
		{	max2=arr[i];
		}
	}
	cout<<"first largest= "<<max1<<endl;
	cout<<"second largest= "<<max2<<endl;
	return 0;
}//end of main
