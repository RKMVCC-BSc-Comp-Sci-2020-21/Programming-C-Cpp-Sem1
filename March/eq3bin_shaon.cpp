// C++ implementation for the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to return ways to split
// a string into three parts
// with the equal number of 0
int count(string s)
{
	
	// Store total count of 0s
	int cnt = 0;

	// Count total no. of 0s
	// character in given string
	for(char c : s) 
	{
		cnt += c == '0' ? 1 : 0;
	}

	// If total count of 0
	// character is not
	// divisible by 3
	if (cnt % 3 != 0)
		return 0;

	int res = 0, k = cnt / 3, sum = 0;

	// Initialize mp to store
	// frequency of k
	map<int, int> mp;

	// Traverse string to find
	// ways to split string
	for(int i = 0; i < s.length(); i++)
	{
		
		// Increment count if 0 appears
		sum += s[i] == '0' ? 1 : 0;

		// Increment result if sum equal to
		// 2*k and k exists in mp
		if (sum == 2 * k && mp.find(k) != mp.end() && 
			i < s.length() - 1 && i > 0)
		{
			res += mp[k];
		}
		
		// Insert sum in mp
		mp[sum]++;
	}
	
	// Return result
	return res;
}

// Driver Code
int main()
{
	
	// Given string
	string str = "01010";

	// Function call
	cout << count(str);
}


