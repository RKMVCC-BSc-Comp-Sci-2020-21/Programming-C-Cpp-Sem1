// Write a C/C++ program using function that determines whether the given integer is a square number.
// Solution by Srijan Dutta

#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int n,a;
    cout << "Enter a number" << endl;
    cin >> n;
    double r,s;
    r= sqrt(n);  // Finding the sqaure root of the number
    s= floor(r);
    if(r-s == 0)
        cout << "It is a square number";
    else 
        cout << "It is not a square number";
}
