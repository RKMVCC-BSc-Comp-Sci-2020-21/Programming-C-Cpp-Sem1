#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void showData(A);
};
void showData(A obj)
{
    cout << obj.a << " " << obj.b;
}

int main()
{
    A obj1(10, 20), obj2(2, 3);
    showData(obj1);
    return 0;
}
