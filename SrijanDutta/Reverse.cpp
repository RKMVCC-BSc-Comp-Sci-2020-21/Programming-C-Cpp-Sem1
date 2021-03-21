//Write a program to reverse the entered number only when its greater than 9
//Sol by Srijan Dutta

#include <iostream>
#include<stdio.h>

using namespace std;

int main(void) {
	int n, d = 0;
	cout << "Enter the number:" << endl;
	cin >> n;
	if (n > 9) {
		for (int i = n; i != 0; i /= 10) {
			d = ((d * 10) + (i % 10));               //Reversing the number
		}
	}
	else
		cout << "Entered number is too small to reverse";
	cout << "The reversed number is :" << d;
}
