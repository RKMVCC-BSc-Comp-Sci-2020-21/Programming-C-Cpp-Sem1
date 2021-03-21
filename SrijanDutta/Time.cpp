//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds
//Sol by Srijan Dutta

#include <iostream>
#include<stdio.h>

using namespace std;

int main(void) {
	int n, d = 0;
	cout << "Enter the number in seconds :\n";
	cin >> n;
	int h, m, s;
	h = n / 3600;
	m = (n - (h * 3600)) / 60;
	s = (n - (h * 3600 + m * 60));
	cout << h << "\n" << m << "\n" << s;
}
