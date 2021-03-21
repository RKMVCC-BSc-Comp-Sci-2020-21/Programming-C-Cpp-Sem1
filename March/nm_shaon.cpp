// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

const int M = 20; 

// states - position, sum, rem, tight 
// sum can have values upto 162, if we 
// are dealing with numbers upto 10^18 
// when all 18 digits are 9, then sum 
// is 18 * 9 = 162 
int dp[M][165][M][2]; 

// n is the sum of digits and number should 
// be divisible by m 
int n, m; 

// Function to return the count of 
// required numbers from 0 to num 
int count(int pos, int sum, int rem, int tight, 
		int nonz, vector<int> num) 
{ 
	// Last position 
	if (pos == num.size()) { 
		if (rem == 0 && sum == n) 
			return 1; 
		return 0; 
	} 

	// If this result is already computed 
	// simply return it 
	if (dp[pos][sum][rem][tight] != -1) 
		return dp[pos][sum][rem][tight]; 

	int ans = 0; 

	// Maximum limit upto which we can place 
	// digit. If tight is 1, means number has 
	// already become smaller so we can place 
	// any digit, otherwise num[pos] 
	int limit = (tight ? 9 : num[pos]); 

	for (int d = 0; d <= limit; d++) { 

		// If the current digit is zero 
		// and nonz is 1, we can't place it 
		if (d == 0 && nonz) 
			continue; 
		int currSum = sum + d; 
		int currRem = (rem * 10 + d) % m; 
		int currF = tight || (d < num[pos]); 
		ans += count(pos + 1, currSum, currRem, 
					currF, nonz || d, num); 
	} 
	return dp[pos][sum][rem][tight] = ans; 
} 

// Function to convert x into its digit vector 
// and uses count() function to return the 
// required count 
int solve(int x) 
{ 
	vector<int> num; 
	while (x) { 
		num.push_back(x % 10); 
		x /= 10; 
	} 
	reverse(num.begin(), num.end()); 

	// Initialize dp 
	memset(dp, -1, sizeof(dp)); 
	return count(0, 0, 0, 0, 0, num); 
} 

// Driver code 
int main() 
{ 
	int L = 1, R = 100; 
	n = 8, m = 2; 
	cout << solve(R) - solve(L); 
	return 0; 
} 
