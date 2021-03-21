#include <iostream>
using namespace std;

struct complex
{
    double real, img;
}a,b,c,d;

complex complex_set(double, double);
void complex_print(complex);
complex operator +(complex,complex);
complex operator -(complex, complex);

complex complex_set(double r, double i)
{
    complex temp;

    temp.real=r;
    temp.img=i;
    return temp;
}
void  complex_print(complex t)
{
    cout<<"( "<<t.real<<" + "<<t.img<<"i )"<<endl;
}
complex operator + (complex c1, complex c2)
{
    complex temp;
    temp.real=c1.real + c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
complex operator - (complex c1,complex c2)
{
    complex temp;

    temp.real=c1.real-c2.real;
    temp.img=c1.img-c2.img;
    return temp;
}

int main()
{

    a=complex_set(1.0,2.0);
    b=complex_set(2.0,2.0);
    
    c=a+b; 
    d=b+c-a;

    cout<<endl<<"c=";
    complex_print(c);
    cout<<endl<<"d=";
    complex_print(d);
    return 0;
}

