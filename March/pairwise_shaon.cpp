// C++ implementation of the above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to count the minimum number of elements 
// to remove from a number so that pairwise two 
// consecutive digits are same. 
int countConsecutive(string s) 
{ 

	// initialize counting variable 
	int count = 0; 

	for (int i = 0; i < s.size(); i++) { 

		// check if two consecutive digits are same 
		if (s[i] == s[i + 1]) 
			i++; 
		else
			count++; 
	} 

	return count; 
} 

// Driver code 
int main() 
{ 
	string str = "44522255"; 
	cout << countConsecutive(str); 
	return 0; 
} 
