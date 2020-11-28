// Coded by Jaidip Patra
//Checking a Palindrome number using c++ built in reverse function
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string num, rev;
    cout << "Enter any number: ";
    cin >> num;
    rev = num;
    reverse(num.begin(), num.end());

    if (rev.compare(num) == 0)
        cout << "The number is palindrome";
    else
        cout << "The number is not palindrome";

    return 0;
}
