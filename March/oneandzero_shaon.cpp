// C++ implementation
#include <bits/stdc++.h> 
using namespace std; 

// Function to count the numbers 
int findNumbers(int N) 
{ 
	// Initialize vector array that store 
	// result. 
	vector<int> v; 

	// Get the each decimal and find its 
	// count store in vector. 
	while (N) { 

		int n = N, m = 0, p = 1; 
		while (n) { 

			// find decimal 
			if (n % 10) 
			m += p; 

			n /= 10; 
			p *= 10; 
		} 

		v.push_back(m); 

		// Decrement N by m for each decimal 
		N -= m; 
	} 

	// Loop for each element of vector 
	// And print its content. 
	for (int i = 0; i < v.size(); i++) 
		cout << " " << v[i]; 

	return 0; 
} 

// Driver code 
int main() 
{ 
	int N = 31; 
	findNumbers(N); 

	return 0; 
} 
