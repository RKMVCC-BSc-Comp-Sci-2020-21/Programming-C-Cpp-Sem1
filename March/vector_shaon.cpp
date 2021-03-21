
#include <bits/stdc++.h>
using namespace std;

// Function to partition squares of N
// natural number in two subset
void minimumSubsetDifference(int N)
{
	// Store the count of blocks of size 8
	int blockOfSize8 = N / 8;

	// Partition of block of 8 element
	string str = "ABBABAAB";

	// Store the minimum subset difference
	int subsetDifference = 0;

	// Partition of N elements to minimize
	// their subset sum difference
	string partition = "";
	while (blockOfSize8--) {
		partition += str;
	}

	// Store elements of subset A and B
	vector<int> A, B;

	for (int i = 0; i < N; i++) {

		// If element is of type A
		if (partition[i] == 'A') {
			A.push_back((i + 1) * (i + 1));
		}

		// If the element is of type B
		else {
			B.push_back((i + 1) * (i + 1));
		}
	}

	// Print the minimum subset difference
	cout << subsetDifference << "\n";

	// Print the first subset
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << " ";

	cout << "\n";

	// Print the second subset
	for (int i = 0; i < B.size(); i++)
		cout << B[i] << " ";
}

// Driver Code
int main()
{
	int N = 8;

	// Function Call
	minimumSubsetDifference(N);

	return 0;
}
