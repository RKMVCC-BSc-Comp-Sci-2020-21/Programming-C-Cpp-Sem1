#include <iostream>

using namespace std;

int main(){

    cout<<"FACTORIAL CALCULATION"<<endl;

    unsigned int n;

    unsigned long long int fac = 1;

    cout << "Enter a number : ";

    cin >> n;

    for(int i = 1; i <= n; ++i){

        fac = fac*i;
    }

    cout << "The factorial of " << n << " = " << fac<<endl;

    return 0;
}
