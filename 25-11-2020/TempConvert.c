//WAP to show interconversion of temperature units.
//Sagnik De

#include <iostream>
using namespace std; 

int main()
{
    float val;
    char unit;

    cout<<"Enter temperature value --> ";
    cin>>val;

    cout<<"Enter C for Celcius, F for Fahrenheit --> ";
    cin>>unit;

    if (unit=='C')
    {
        cout<<"\n\nConverting "<<val<<" C to Fahrenheit..."<<endl;
        val = (9*val)/5 + 32;
        cout<<"Result --> "<<val<<" F\n\n"<<endl;
    }
    else if (unit=='F')
    {
        cout<<"\n\nConverting "<<val<<" F to Celcius..."<<endl;
        val = (val-32)*5/9;
        cout<<"Result --> "<<val<<" C\n\n"<<endl;
    }
    else
        cout<<"\n\tINVALID INPUT!"<<endl;

    return 0;
}
