#include <iostream>
#include <stdio.h>

using namespace std;

int Factorial(int n);   //This is done to avoid errors

int main(void){
  cout << "Enter the number:\n";
  int n;
  cin >> n;
  cout << "The Factorial of " << n << " is: " << Factorial(n);
}

int Factorial(int n) {       //This method calculates the factorial recursively
	if (n >= 1)
		return n * Factorial(n - 1);
	else
		return 1;
}
