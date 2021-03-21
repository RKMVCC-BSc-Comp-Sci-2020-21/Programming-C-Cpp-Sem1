// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to count the minimum number
// of digits required to be removed to
// make a given number divisible by 4
void minimumDeletions(string s)
{
	// Store the size of the string
	int n = s.length();

	// Stores the required result
	int ans = n;

	// Check for every pair of digits
	// if the number formed by them
	// is divisible by 4 or not
	for (int i = n - 1; i >= 0; i--) {

		// Store s[i] in a variable
		int t = s[i] - '0';

		// If it is divisible by 2
		if (t % 2 == 0) {
			for (int j = i - 1;
				j >= 0; j--) {

				// Store the number formed
				// by s[j] and s[i]
				int num = (s[j] - '0')
							* 10
						+ t;

				// Check if it is
				// divisible by 4
				if (num % 4 == 0) {

					// Store the number of digits
					// required to be deleted
					int k1 = i - j - 1;
					int k2 = n - i - 1;

					// Update ans
					ans = min(ans,
							k1 + k2);
				}
			}
		}
	}

	// If value of ans is unchanged, then
	// check if any s[i] is divisible by 4
	if (ans == n) {

		for (int i = 0; i < n; i++) {

			int num = s[i] - '0';

			// If true, update ans to n - 1
			if (num % 4 == 0) {
				ans = n - 1;
			}
		}
	}

	// Print the result
	cout << ans;
}

// Driver Code
int main()
{
	string str = "12367";
	minimumDeletions(str);

	return 0;
}
