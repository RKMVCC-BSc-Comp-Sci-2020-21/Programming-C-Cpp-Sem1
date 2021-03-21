#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Input the values for Number1 and Number2 :"<<endl;
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << "Number1 and Number2 are equal";
    }

    else
    {
        cout << "Number1 and Number2 are not equal";
    }
}