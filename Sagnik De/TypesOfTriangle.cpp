// WAP to input all sides of a triangle and check if the triangle is Equilateral, Isosceles, Scalene or INVALID.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter the sides of a triangle :\n";
    cin>>a>>b>>c;

    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        if((a==b)&&(a==c))
            cout<<"\n\tEquilateral Triangle\n\n";
        else  if((a==b)||(a==c)||(b==c))
            cout<<"\n\tIsosceles Triangle\n\n";
        else
            cout<<"\n\tScalene Triangle\n\n";
    }
    else
        cout<<"\n\tTriangle is not valid!\n\n";

    return 0;
}
