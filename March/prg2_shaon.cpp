#include <bits/stdc++.h> 
using namespace std; 
// C++ implementation of above approach 

// Function to find the length of a 
// longest subarray in which elements 
// greater than K are more than 
// elements not greater than K 
int LongestSubarray(int a[], int n, int k) 
{ 

	int pre[n] = { 0 }; 

	// Create a new array in which we store 1 
	// if a[i] > k otherwise we store -1. 
	for (int i = 0; i < n; i++) { 
		if (a[i] > k) 
			pre[i] = 1; 
		else
			pre[i] = -1; 
	} 

	// Taking prefix sum over it 
	for (int i = 1; i < n; i++) 
		pre[i] = pre[i - 1] + pre[i]; 

	// len will store maximum 
	// length of subarray 
	int len = 0; 

	int lo = 1, hi = n; 

	while (lo <= hi) { 
		int mid = (lo + hi) / 2; 

		// This indicate there is at least one 
		// subarray of length mid that has sum > 0 
		bool ok = false; 

		// Check every subarray of length mid if 
		// it has sum > 0 or not if sum > 0 then it 
		// will satisfy our required condition 
		for (int i = mid - 1; i < n; i++) { 

			// x will store the sum of 
			// subarray of length mid 
			int x = pre[i]; 
			if (i - mid >= 0) 
				x -= pre[i - mid]; 

			// Satisfy our given condition 
			if (x > 0) { 
				ok = true; 
				break; 
			} 
		} 

		// Check for higher length as we 
		// get length mid 
		if (ok == true) { 
			len = mid; 
			lo = mid + 1; 
		} 
		// Check for lower length as we 
		// did not get length mid 
		else
			hi = mid - 1; 
	} 

	return len; 
} 

// Driver code 
int main() 
{ 
	int a[] = { 2, 3, 4, 5, 3, 7 }; 
	int k = 3; 
	int n = sizeof(a) / sizeof(a[0]); 

	cout << LongestSubarray(a, n, k); 

	return 0; 
} 
