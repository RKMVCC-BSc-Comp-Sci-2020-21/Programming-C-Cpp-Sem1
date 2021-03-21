// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

// Function to calculate
// the number of ways to split
int splitstring(string s)
{
	int n = s.length();

	// Calculating the total
	// number of zeros
	int zeros = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == '0')
			zeros++;

	// Case1
	// If total count of zeros is not
	// divisible by 3
	if (zeros % 3 != 0)
		return 0;

	// Case2
	// if total count of zeros
	// is zero
	if (zeros == 0)
		return ((n - 1) * (n - 2)) / 2;

	// Case3
	// General case

	// Number of zeros in each substring
	int zerosInEachSubstring = zeros / 3;

	// Initialising zero to the number of ways
	// for first and second cut
	int waysOfFirstCut = 0, waysOfSecondCut = 0;

	// Initializing the count
	int count = 0;

	// Traversing from the begining
	for (int i = 0; i < n; i++) 
	{
		
		// Incrementing the count
		// if the element is '0'
		if (s[i] == '0')
			count++;

		// Incrementing the ways for the
		// 1st cut if count is equal to
		// zeros required in each substring
		if (count == zerosInEachSubstring)
			waysOfFirstCut++;

		// Incrementing the ways for the
		// 2nd cut if count is equal to
		// 2*(zeros required in each substring)
		else if (count == 2 * zerosInEachSubstring)
			waysOfSecondCut++;
	}

	// Total number of ways to split is 
	// multiplication of ways for the 1st 
	// and 2nd cut
	return waysOfFirstCut * waysOfSecondCut;
}

// Driver Code
int main()
{
	string s = "01010";

	// Function Call
	cout << "The number of ways to split is "
		<< splitstring(s) << endl;
}


