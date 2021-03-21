#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0;
    
    cout << " Numbers between 0 and 100, divisible by 9: " << endl;
    for (i = 1; i < 100; i++) 
    {
        if (i % 9 == 0) 
        {
            cout << " " << i;
            sum += i;
        }
    }
    cout << "\n The sum : " << sum << endl;
}