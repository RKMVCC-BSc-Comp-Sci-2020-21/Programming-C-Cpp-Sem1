#include<iostream>
using namespace std;
class Complex
{
private:
    int x,y;
public:
    void putdata()
    {
        cout<<"\t ("<<x<<"+"<<y<<"i)"<<endl;
    }
    void putdata1()
    {
        cout<<" ("<<x<<"+"<<y<<"i)";
    }
    Complex()
    {

    }

    Complex(int a,int b)
    {
        x=a;
        y=b;

    }
    Complex operator-(Complex c)
    {
        Complex t;
        t.x= x-c.x;
        t.y=y-c.y;

        return (t);
    }
};
int main()
{
    Complex c1,c2,c3;
     c1=Complex(12,23);
    c2 = Complex(2,3);

   c1.putdata1();
    cout<<" - ";
    c2.putdata1();

    cout<<"\t=";
    c3 = c1 - c2;
    c3.putdata();

    return 0;
}
