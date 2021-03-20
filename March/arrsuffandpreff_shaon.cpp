// C++ implementation of the above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find power of 
// a number. 
int power(int a, int b) 
{ 
	int result = 1; 
	while (b > 0) { 
		if (b % 2 == 1) { 
			result = result * a; 
		} 
		a = a * a; 
		b = b / 2; 
	} 
	return result; 
} 

// Function to find 
// factorial of a number. 
int factorial(int n) 
{ 
	int fact = 1; 
	for (int i = 1; i <= n; i++) { 
		fact = fact * i; 
	} 
	return fact; 
} 

// Function to print no of arrays 
void findNoOfArrays(int* a, int n) 
{ 
	// c variable counts the no of pairs 
	int sum = 0, s1, c = 0; 

	// Map to store the frequency 
	// of each element 
	map<int, int> mp; 

	for (int i = 0; i < 2 * n; i++) { 
		mp[a[i]]++; 

		// Sum of all elements of the array 
		sum = sum + a[i]; 
	} 

	// Variable to check if it is 
	// possible to make any array 
	bool isArrayPossible = true; 
	int ans = factorial(n - 1); 

	// First element of suffix array 
	// and the last element of prefix array 
	s1 = sum / (n + 1); 

	// Check if the element exists in the map 
	if (mp[s1] >= 2) { 
		mp[s1] = mp[s1] - 2; 
	} 
	else { 
		isArrayPossible = false; 
	} 
	if (isArrayPossible) { 
		for (auto i : mp) { 

			// If elements of any pair are equal 
			// and their frequency is not divisible by 2 
			// update the isArrayPossible variable 
			// to false and break through the loop 

			if (i.first == s1 - i.first) { 
				if (mp[i.first] % 2 != 0) { 
					isArrayPossible = false; 
					break; 
				} 
			} 

			// If elements of any pair are not equal 
			// and their frequency is not same 
			// update the isArrayPossible variable 
			// to false and break through the loop 

			if (i.first != s1 - i.first) { 
				if (mp[i.first] 
					!= mp[s1 - i.first]) { 
					isArrayPossible = false; 
					break; 
				} 
			} 
			// Check if frequency is greater than zero 
			if (i.second > 0) { 
				if (i.first != s1 - i.first) { 
					// update the count of pairs 

					c = c + i.second; 

					// Multiply the answer by 
					// 2^(frequency of pairs) since 
					// the elements of the pair are 
					// not the same in this condition 

					ans = ans * power(2, i.second); 

					// Divide the answer by the factorial 
					// of no of similar pairs 

					ans = ans / factorial(i.second); 

					// Make frequency of both these elements 0 

					mp[i.first] = 0; 
					mp[s1 - i.first] = 0; 
				} 
				if (i.first == s1 - i.first) { 
					// Update the count of pairs 

					c = c + i.second / 2; 

					// Divide the answer by the factorial 
					// of no. of similar pairs 

					ans = ans / factorial(i.second / 2); 

					// Make frequency of this element 0 
					mp[i.first] = 0; 
				} 
			} 
		} 
	} 

	// Check if it is possible to make the 
	// array and there are n-1 pairs 
	// whose sum will be equal to s1 
	if (c < n - 1 || isArrayPossible == false) { 
		cout << "0" << endl; 
	} 
	else { 
		cout << ans << endl; 
	} 
} 

// Driver code 
int main() 
{ 
	int arr1[] = { 5, 2, 3, 5 }; 
	int n1 = sizeof(arr1) / sizeof(arr1[0]); 

	// Function calling 
	findNoOfArrays(arr1, n1 / 2); 

	int arr2[] = { -1, -1, -1, 0, 1, 0, 
				1, 0, 1, 0, 0, 0 }; 
	int n2 = sizeof(arr2) / sizeof(arr2[0]); 
	findNoOfArrays(arr2, n2 / 2); 
	return 0; 
} 
