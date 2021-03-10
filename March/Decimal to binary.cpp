#include<iostream>
using namespace std; 
int main ()
{
    int num, bin;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    return 0;
}
