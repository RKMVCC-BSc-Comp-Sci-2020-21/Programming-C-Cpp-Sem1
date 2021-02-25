
#include <iostream>

using namespace std;

int main(){
    int f;
    double C = 0;

    cout<<"Fahrenheit to Celsius conversion : \n";

    for(f = 0;f <= 100;f =f +5){

        C = (f - 32)/1.8;

        cout<<f<<"\370F = "<<C<<"\370C"<<endl;

    }
    return 0;
}
