#include <iostream>

using namespace std;

int main(void){
    double r;
    cout << "Enter the radius:" << endl;
    cin >> r;
    double v,s;
    v= ( 4* 3.14 * r*r*r)/3.0;
    s= 4* 3.14 * r;
    cout << "The volume of the sphere is: " << v << "\nThe surface area of the sphere is :" << s;
}