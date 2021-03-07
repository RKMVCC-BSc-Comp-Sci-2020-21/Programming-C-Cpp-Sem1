#include< iostream>
using namespace std;
int main()
{
	int n,i,j,temp, arr[50];
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<< n<<" numbers one by one:\n";
	for(i=0; i< n; i++)
		cin>>arr[i];
	//sorting using bubble sort
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i< n; i++)
	{
		cout<< arr[i]<<" ";
	}
}
