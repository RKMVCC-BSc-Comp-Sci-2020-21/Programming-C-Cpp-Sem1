// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if the subarray
// arr[i..j] is a sorted subarray or not
int isSortedparitions(int arr[],
					int i, int j)
{
	// Traverse all elements of
	// the subarray arr[i...j]
	for (int k = i + 1; k <= j; k++) {

		// If the previous element of the
		// subarray exceeds current element
		if (arr[k] < arr[k - 1]) {

			// Return 0
			return 0;
		}
	}

	// Return 1
	return 1;
}

// Recursively partition the array
// into two equal halves
int partitionsArr(int arr[],
				int i, int j)
{
	// If atmost one element is left
	// in the subarray arr[i..j]
	if (i >= j)
		return 1;

	// Checks if subarray arr[i..j] is
	// a sorted subarray or not
	bool flag = isSortedparitions(
		arr, i, j);

	// If the subarray arr[i...j]
	// is a sorted subarray
	if (flag) {
		return (j - i + 1);
	}

	// Stores middle element
	// of the subarray arr[i..j]
	int mid = (i + j) / 2;

	// Recursively partition the current
	// subarray arr[i..j] into equal halves
	int X = partitionsArr(arr, i, mid);
	int Y = partitionsArr(arr, mid + 1, j);

	return max(X, Y);
}

// Driver Code
int main()
{

	int arr[] = { 11, 12, 1, 2,
				13, 14, 3, 4 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << partitionsArr(
		arr, 0, N - 1);

	return 0;
}
