//  C/C++ Program to display the pattern like right angle triangle with number.
//  Sloution by Srijan Dutta
#include <iostream>

using namespace std;

int main(void){
	int n;
	cout << "Enter the number of rows: " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int j=1;j<=i; j++){
				cout << "* " ;
		}
		cout << endl;
	}
}
