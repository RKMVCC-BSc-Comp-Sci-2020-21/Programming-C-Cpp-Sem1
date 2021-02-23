      
#include <iostream>
#include <cmath>
#include <cstdlib>
 
using namespace std;

int main(int argc, char **argv)
{
    int p = 0;
    for (int i = 0; i < 7; i++)
    {
        p = rand() % 400;
        if (p > 360)
            cout << 0 << " ";
        else if (p < 0)
            cout << 0 << " ";
        else
            cout << p * 0.1 / 360 << " ";
    }
    cout << "........";
    
    return 0;
}
