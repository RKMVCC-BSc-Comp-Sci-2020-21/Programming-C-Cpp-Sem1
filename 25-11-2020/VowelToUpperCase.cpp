#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
cout << "Enter the Sentence\n";
string a;
cin >> a;
int x = a.length();
	string c = "AEIOU";
	for (int i = 0; i < x; i++) {
		if ((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'i') || (a[i] == 'o') || (a[i] == 'u'))
			a[i] = a[i] - 'a' + 'A';
	}
cout << "The processed string is\n" << a;
}
