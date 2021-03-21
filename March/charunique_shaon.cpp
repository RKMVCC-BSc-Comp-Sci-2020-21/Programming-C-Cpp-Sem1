// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum count of
// characters required to be deleted to make
// frequencies of all characters unique
int minCntCharDeletionsfrequency(string& str,
								int N)
{
	// Stores frequency of each
	// distinct character of str
	unordered_map<char, int> mp;

	// Store frequency of each distinct
	// character such that the largest
	// frequency is present at the top
	priority_queue<int> pq;

	// Stores minimum count of characters
	// required to be deleted to make
	// frequency of each character unique
	int cntChar = 0;

	// Traverse the string
	for (int i = 0; i < N; i++) {

		// Update frequency of str[i]
		mp[str[i]]++;
	}

	// Traverse the map
	for (auto it : mp) {

		// Insert current
		// frequency into pq
		pq.push(it.second);
	}

	// Traverse the priority_queue
	while (!pq.empty()) {

		// Stores topmost
		// element of pq
		int frequent
			= pq.top();

		// Pop the topmost element
		pq.pop();

		// If pq is empty
		if (pq.empty()) {

			// Return cntChar
			return cntChar;
		}

		// If frequent and topmost
		// element of pq are equal
		if (frequent == pq.top()) {

			// If frequency of the topmost
			// element is greater than 1
			if (frequent > 1) {

				// Insert the decremented
				// value of frequent
				pq.push(frequent - 1);
			}

			// Update cntChar
			cntChar++;
		}
	}

	return cntChar;
}

// Driver Code
int main()
{

	string str = "abbbcccd";

	// Stores length of str
	int N = str.length();
	cout << minCntCharDeletionsfrequency(
		str, N);
	return 0;
}
