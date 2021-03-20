// CPP program to find number of spectators 
// standing at a time 
#include <bits/stdc++.h> 
using namespace std; 

void result(long long n, long long k, long long t) 
{ 
	// If the time is less than k 
	// then we can print directly t time. 
	if (t <= k) 
		cout << t; 

	// If the time is n then k spectators 
	// are standing. 
	else if (t <= n) 
		cout << k; 

	// Otherwise we calculate the spectators 
	// standing. 
	else { 
		long long temp = t - n; 
		temp = k - temp; 
		cout << temp; 
	} 
} 

// Driver code 
int main() 
{ 
	// Stores the value of n, k and t 
	// t is time 
	// n & k is the number of specators 
	long long n, k, t; 
	n = 10; 
	k = 5; 
	t = 12; 
	result(n, k, t); 
	return 0; 
} 
