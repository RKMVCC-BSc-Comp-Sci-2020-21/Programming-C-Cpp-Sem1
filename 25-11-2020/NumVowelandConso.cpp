#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
int x = 0, y = 0;
string line;
cout <<"Enter the sentence \n";
cin >>line;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||line[i] == 'U') {
			++x;
		}
		else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
			++y;
		}
	}
cout << "The number of consonants is: " << y << "\nThe number of vowels is: " << x;
}
