// C++ program to illustrate the traversal 
// of the array 
#include "iostream" 
using namespace std; 

// Function to illustrate traversal in arr[] 
void traverseArray(int arr[], int N) 
{ 

	// Iterate from [1, N-1] and print 
	// the element at that index 
	for (int i = 0; i < N; i++) { 
		cout << arr[i] << ' '; 
	} 
} 

// Driver Code 
int main() 
{ 

	// Given array 
	int arr[] = { 1, 2, 3, 4 }; 

	// Size of the array 
	int N = sizeof(arr) / sizeof(arr[0]); 

	// Function call 
	traverseArray(arr, N); 
} 
