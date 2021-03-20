// C++ program to illustrate the use 
// of Function Templates 
#include <iostream> 
#include <stdio.h> 
using namespace std; 

// Function Template 
template <class T> 
T Min(T x, T y) 
{ 
	return (x < y) ? x : y; 
} 

// Driver Code 
int main() 
{ 
	int a = 4, b = 8; 

	// Find the minimum of a and b 
	cout << "Minimum of both is: " << min(a, b); 

	return 0; 
} 
