// C++ program to illustrate 
// preprocessor directives 
#include <bits/stdc++.h> 

#define min(a, b) ((a < b) ? a : b) 

using namespace std; 

// Driver code 
int main() 
{ 
	int a = 2, b = 4; 

	// Find the minimum of a and b 
	cout << "Minimum of both is: "
		<< min(a, b); 

	return 0; 
} 
