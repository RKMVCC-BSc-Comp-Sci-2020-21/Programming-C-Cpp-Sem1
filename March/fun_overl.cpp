#include <iostream>
using namespace std;
int mul(int, int);
float mul(float, int);

int mul(int a, int b)
{
return a * b;
}
float mul(double x, int y)
{
return x * y;
}
int main()
{
int a = mul(5, 6);
float b = mul(1.3, 9.1);
std::cout << "a =  " << a << std::endl;
std::cout << "b =  " << b << std::endl;
return 0;
}
