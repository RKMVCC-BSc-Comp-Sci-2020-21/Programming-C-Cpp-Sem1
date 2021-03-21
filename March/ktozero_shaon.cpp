// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the length of
// longest subarray having sum K
int longestSubarray(int arr[],
					int N, int K)
{
	// Stores the index of
	// the prefix sum
	unordered_map<int, int> um;

	int sum = 0, maxLen = 0;

	// Traverse the given array
	for (int i = 0; i < N; i++) {

		// Update sum
		sum += arr[i];

		// If the subarray starts
		// from index 0
		if (sum == K)
			maxLen = i + 1;

		// Add the current prefix sum
		// with index if it is not
		// present in the map um
		if (um.find(sum) == um.end())
			um[sum] = i;

		// Check if sum - K is
		// present in Map um or not
		if (um.find(sum - K) != um.end()) {

			// Update the maxLength
			if (maxLen < (i - um[sum - K]))
				maxLen = i - um[sum - K];
		}
	}

	// Return the required maximum length
	return maxLen;
}

// Function to find the minimum removal of
// array elements required to reduce K to 0
void minRequiredOperation(int arr[],
						int N, int K)
{
	// Stores the sum of the array
	int TotalSum = 0;

	// Traverse the array arr[]
	for (int i = 0; i < N; i++)

		// Update sum of the array
		TotalSum += arr[i];

	// Find maxLen
	int maxLen = longestSubarray(
		arr, N, TotalSum - K);

	// If the subarray with
	// sum doesn't exist
	if (maxLen == -1) {
		cout << -1;
	}

	// Otherwise, print the
	// required maxmimum length
	else
		cout << N - maxLen;
}

// Driver Code
int main()
{
	int arr[] = { 1, 3, 1, 1, 2 };
	int K = 4;
	int N = sizeof(arr) / sizeof(arr[0]);

	minRequiredOperation(arr, N, K);

	return 0;
}
