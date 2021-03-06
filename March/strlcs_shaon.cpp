// C++ program to get number of ways to increase
// LCS by 1
#include <bits/stdc++.h>
using namespace std;

#define M 26

// Utility method to get integer position of lower
// alphabet character
int toInt(char ch)
{
	return (ch - 'a');
}

// Method returns total ways to increase LCS length by 1
int waysToIncreaseLCSBy1(string str1, string str2)
{
	int m = str1.length(), n = str2.length();

	// Fill positions of each character in vector
	vector<int> position[M];
	for (int i = 1; i <= n; i++)
		position[toInt(str2[i-1])].push_back(i);

	int lcsl[m + 2][n + 2];
	int lcsr[m + 2][n + 2];

	// Initializing 2D array by 0 values
	for (int i = 0; i <= m+1; i++)
		for (int j = 0; j <= n + 1; j++)
			lcsl[i][j] = lcsr[i][j] = 0;

	// Filling LCS array for prefix substrings
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (str1[i-1] == str2[j-1])
				lcsl[i][j] = 1 + lcsl[i-1][j-1];
			else
				lcsl[i][j] = max(lcsl[i-1][j],
								lcsl[i][j-1]);
		}
	}

	// Filling LCS array for suffix substrings
	for (int i = m; i >= 1; i--)
	{
		for (int j = n; j >= 1; j--)
		{
			if (str1[i-1] == str2[j-1])
				lcsr[i][j] = 1 + lcsr[i+1][j+1];
			else
				lcsr[i][j] = max(lcsr[i+1][j],
								lcsr[i][j+1]);
		}
	}

	// Looping for all possible insertion positions
	// in first string
	int ways = 0;
	for (int i=0; i<=m; i++)
	{
		// Trying all possible lower case characters
		for (char c='a'; c<='z'; c++)
		{
			// Now for each character, loop over same
			// character positions in second string
			for (int j=0; j<position[toInt(c)].size(); j++)
			{
				int p = position[toInt(c)][j];

				// If both, left and right substrings make
				// total LCS then increase result by 1
				if (lcsl[i][p-1] + lcsr[i+1][p+1] == lcsl[m][n])
					ways++;
			}
		}
	}

	return ways;
}

// Driver code to test above methods
int main()
{
	string str1 = "abcabc";
	string str2 = "abcd";
	cout << waysToIncreaseLCSBy1(str1, str2);
	return 0;
}
