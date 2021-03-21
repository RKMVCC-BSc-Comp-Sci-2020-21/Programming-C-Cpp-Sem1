//Write a Program to enter the number of days and convert it to years and weeks
//Sol by Srijan Dutta

#include <iostream>
#include<stdio.h>

using namespace std;

int main(void) {
	int n, i;
	cout << "Enter the number of days:\n";
	cin >> n;
	i = n;
	int y, w;
	if (n > 365)
		y = n / 365;
	
	w = n / 7;
	cout << "Converted Date:\n Years:" << y << "\nWeeks:" << w;
}
