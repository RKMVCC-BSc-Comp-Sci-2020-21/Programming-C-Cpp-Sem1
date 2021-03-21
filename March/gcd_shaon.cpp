// C++ program to split N natural numbers
// into two sets having GCD
// of their sums greater than 1

#include <bits/stdc++.h>
using namespace std;

// Function to create
// and print the two sets
void createSets(int N)
{
	// No such split
	// possible for N <= 2
	if (N <= 2) {
		cout << "-1" << endl;
		return;
	}

	// Print the first set
	// consisting of even elements
	for (int i = 2; i <= N; i += 2)
		cout << i << " ";
	cout << "\n";
	// Print the second set
	// consisting of odd ones
	for (int i = 1; i <= N; i += 2) {
		cout << i << " ";
	}
}
// Driver Code
int main()
{

	int N = 6;
	createSets(N);

	return 0;
}
