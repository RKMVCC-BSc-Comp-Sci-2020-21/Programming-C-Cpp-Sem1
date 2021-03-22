#include <iostream>
using namespace std;

class A
{
public:
virtual void display()
{
cout << "From Base class" << endl;
}
};
class B : public A
{
public:
void display()
{
cout << "From Derived Class" << endl;
}
};
int main()
{
A *a;
B b;
a = &b;
a->display();
return 0;
}
