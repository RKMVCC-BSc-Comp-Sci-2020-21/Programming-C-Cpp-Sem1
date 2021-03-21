// Program to convert days into Years:Weeks:Days //



#include <iostream>
using namespace std;

int main()
{
    int val, yrs, wks, day, rem;

    cout<<"Enter the value in days --> ";
    cin>>val;

    yrs = val/365;
    rem = val%365;
    wks = rem/7;
    day = rem%7;

    cout<<"\n\t"<<val<<" days is equivalent to "<<yrs<<" years, "<<wks<<" weeks and "<<day<<" days.\n\n";

    return 0;
}
