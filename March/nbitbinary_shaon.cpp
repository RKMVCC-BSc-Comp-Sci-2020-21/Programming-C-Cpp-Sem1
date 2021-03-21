// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the count 
// of possible numbers 
int count(int n) 
{ 
	return pow(2, n - 1); 
} 

// Driver code 
int main() 
{ 
	int n = 4; 

	cout << count(n); 

	return 0; 
} 
