#include <iostream>
using namespace std;
double divisionby(int num1, int num2)
{
    if (num2 == 0)
    {
        throw "Division by zero condition!";
    }
    cout << "answer = ";
    return (num1 / num2);
}
int main()
{
    int n1, n2;
    cout << "enter two numbers for division operation  :  ";
    cin >> n1 >> n2;
    double n3 = 0;
    try
    {
        n3 = divisionby(n1, n2);
        cout << n3 << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}
