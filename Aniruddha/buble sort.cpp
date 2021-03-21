#include <iostream> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
	
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 


void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int arr[100] ;
	int x,i;//i is known as local to main
	cout<<"Enter the number you want to insert  ";
	cin>>x;
	for(i=0;i<x;i++)
	{
		cout<<"Enter  "<<(i+1)<<"  number  ";
		cin>>arr[i];
	}
	 
	//int n = sizeof(arr)/sizeof(arr[0]); 
	//cout<<sizeof(arr); number of elements
	//cout<<sizeof(arr[0]); size of first  element 
	bubbleSort(arr, x); 
	cout<<"\n\n\nSorted array: \n\n"; 
	printArray(arr, x); 
	return 0; 
} 
