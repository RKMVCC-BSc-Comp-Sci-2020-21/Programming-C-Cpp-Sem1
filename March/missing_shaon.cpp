// C++ Program to find two Missing Numbers using O(n) 
// extra space 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find two missing numbers in range 
// [1, n]. This function assumes that size of array 
// is n-2 and all array elements are distinct 
void findTwoMissingNumbers(int arr[], int n) 
{ 
	// Create a boolean vector of size n+1 and 
	// mark all present elements of arr[] in it. 
	vector<bool> mark(n+1, false); 
	for (int i = 0; i < n-2; i++) 
		mark[arr[i]] = true; 

	// Print two unmarked elements 
	cout << "Two Missing Numbers are\n"; 
	for (int i = 1; i <= n; i++) 
	if (! mark[i]) 
		cout << i << " "; 

	cout << endl; 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = {1, 3, 5, 6}; 

	// Range of numbers is 2 plus size of array 
	int n = 2 + sizeof(arr)/sizeof(arr[0]); 

	findTwoMissingNumbers(arr, n); 

	return 0; 
} 
