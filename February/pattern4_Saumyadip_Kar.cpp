#include <iostream>
using namespace std;

int main()
{
    int i, j, row;

    cout << "Enter number of rows: ";
    cin >> row;

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}