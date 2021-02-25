#include <iostream>

using namespace std;

const float pi = 3.14159;

int main(){

    float r = 0;

    cout<<"Enter the radius of circle : ";

    cin>>r;

    cout<<"\nThe perimeter of the circle : "<<2*pi*r<<endl;

    cout<<"The area of the circle : "<<pi*r*r<<endl;

    return 0;
}

