// C++ implementation to find the
// Minimum characters to be replaced
// to make frequency of all characters same

#include <bits/stdc++.h>
using namespace std;

// Function to find the
// Minimum operations to convert
// given string to another with
// equal frequencies of characters
int minOperations(string s)
{
	// Frequency of characters
	int freq[26] = { 0 };
	int n = s.length();

	// Loop to find the Frequency
	// of each character
	for (int i = 0; i < n; i++) {
		freq[s[i] - 'A']++;
	}

	// Sort in decreasing order
	// based on frequency
	sort(freq, freq + 26, greater<int>());

	// Maximum possible answer
	int answer = n;

	// Loop to find the minimum operations
	// required such that frequency of
	// every character is equal
	for (int i = 1; i <= 26; i++) {
		if (n % i == 0) {
			int x = n / i;
			int y = 0;
			for (int j = 0; j < i; j++) {
				y += min(freq[j], x);
			}
			answer = min(answer, n - y);
		}
	}
	return answer;
}

// Driver Code
int main()
{
	string s = "BBC";
	cout << minOperations(s);

	return 0;
}
