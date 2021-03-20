//WAP to print the roots of Quadratic Equation

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D, R1, R2;

    cout<<"A Quadratic Equation is of the form: ax^2 + bx + c"<<endl;
    cout<<"\nEnter the values of a, b, c: "<<endl;
    cin>>a>>b>>c;

    cout<<"\nYour Equation is: "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;

    D = (b*b)-4*a*c;

    if(D<0)
        cout<<"\n\tThe roots are imaginary!"<<endl;
    else
    {
        R1 = (-b+sqrt(D))/(2*a);
        R2 = (-b-sqrt(D))/(2*a);
        cout<<"\n\tThe Roots are: "<<R1<<" and "<<R2<<"\n\n";
    }

    return 0;
}
