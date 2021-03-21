// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the maximum 
// product of sum for any partition 
int maxProdSum(int arr[], int n) 
{ 
	int leftArraySum = 0, maxProduct = 0; 

	// Traversing the array 
	for (int i = 0; i < n; i++) { 

		// Compute left array sum 
		leftArraySum += arr[i]; 

		// Compute right array sum 
		int rightArraySum = 0; 
		for (int j = i + 1; j < n; j++) { 
			rightArraySum += arr[j]; 
		} 

		// Multiplying left and right subarray sum 
		int k = leftArraySum * rightArraySum; 

		// Checking for the maximum product 
		// of sum of left and right subarray 
		if (k > maxProduct) { 
			maxProduct = k; 
		} 
	} 

	// Printing the maximum product 
	return maxProduct; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 4, 10, 1, 7, 2, 9 }; 
	int n = sizeof(arr) / sizeof(int); 

	cout << maxProdSum(arr, n); 

	return 0; 
} 
