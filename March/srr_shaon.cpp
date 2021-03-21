// C++ implementation of above approach

#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int[], int);

// Function to fill the position
// with arr[i] = 0
void solve(int arr[], int n)
{

	set<int> unfilled_indices;
	set<int> missing;

	// Inserting all elements in
	// missing[] set from 1 to N
	for (int i = 1; i < n; i++)
		missing.insert(i);

	for (int i = 1; i < n; i++) {

		// Inserting unfilled positions
		if (arr[i] == 0)
			unfilled_indices.insert(i);

		// Removing allocated_elements
		else {
			auto it = missing.find(arr[i]);
			missing.erase(it);
		}
	}
	auto it2 = missing.end();
	it2--;

	// Loop for filling the positions
	// with arr[i] != i
	for (auto it = unfilled_indices.begin();
		it != unfilled_indices.end();
		it++, it2--) {
		arr[*it] = *it2;
	}
	int pos = 0;

	// Checking for any arr[i] = i
	for (int i = 1; i < n; i++) {
		if (arr[i] == i) {
			pos = i;
		}
	}

	int x;

	// Finding the suitable position
	// in the array to swap with found i
	// for which arr[i] = i
	if (pos != 0) {
		for (int i = 1; i < n; i++) {
			if (pos != i) {

				// Checking if the position
				// is present in unfilled_position
				if (unfilled_indices.find(i)
					!= unfilled_indices.end()) {

					// Swapping arr[i] & arr[pos]
					// (arr[pos] = pos)
					x = arr[i];
					arr[i] = pos;
					arr[pos] = x;
					break;
				}
			}
		}
	}
	printArray(arr, n);
}

// Function to Print the array
void printArray(int arr[], int n)
{
	for (int i = 1; i < n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = { 0, 7, 4, 0,
				3, 0, 5, 1 };

	int n = sizeof(arr) / sizeof(arr[0]);

	solve(arr, n);
	return 0;
}
