// WAP to input all sides of a triangle and check whether triangle is valid or not.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter the sides of a triangle :\n";
    cin>>a>>b>>c;

    if((a+b>c)&&(a+c>b)&&(b+c>a))
        cout<<"\n\tTriangle is Possible\n\n";
    else
        cout<<"\n\tTriangle is Not Possible\n\n";

    return 0;
}
