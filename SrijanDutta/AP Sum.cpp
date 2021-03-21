//Write a program in C++ to find out the sum of an A.P. series.
//Sol. by Srijan Dutta

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(void) {
	int a, n, d, sum = 0, l;          //declaring required variables
	cout << "Enter the starting variable:\n";
	cin >> a;
	cout << "Enter the common difference:\n";
	cin >> d;
	cout << "Enrter the number of items for the series:\n";
	cin >> n;
	l = a + (n - 1) * d;
	sum = (n * (2 * a + (n - 1) * d)) / 2;                  //sum of ap series= (n*(2a+(n-1)*d))/2
	for (int i = a; i <= l; i+=d){                          //printing the AP series and the sum
		if (i != l)
			cout << i << " +";
		else
			cout << i << " = " << sum;
	}
}
