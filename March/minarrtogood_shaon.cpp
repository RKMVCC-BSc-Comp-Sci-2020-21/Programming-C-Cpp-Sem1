// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the minimum number 
// of elements that must be removed 
// to make the given array good 
int minimumRemoval(int n, int a[]) 
{ 

	map<int, int> c; 

	// Count frequency of each element 
	for (int i = 0; i < n; i++) 
		c[a[i]]++; 

	int ans = 0; 

	// For each element check if there 
	// exists another element that makes 
	// a valid pair 
	for (int i = 0; i < n; i++) { 
		bool ok = false; 
		for (int j = 0; j < 31; j++) { 
			int x = (1 << j) - a[i]; 
			if (c.count(x) && (c[x] > 1 
					|| (c[x] == 1 && x != a[i]))) { 
				ok = true; 
				break; 
			} 
		} 

		// If does not exist then 
		// increment answer 
		if (!ok) 
			ans++; 
	} 

	return ans; 
} 

// Driver code 
int main() 
{ 
	int a[] = { 4, 7, 1, 5, 4, 9 }; 
	int n = sizeof(a) / sizeof(a[0]); 
	cout << minimumRemoval(n, a); 

	return 0; 
} 
