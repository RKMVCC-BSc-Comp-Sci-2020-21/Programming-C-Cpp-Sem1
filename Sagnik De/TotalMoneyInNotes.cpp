// WAP to enter an amt in Rs. and convert them into notes

#include <iostream>
using namespace std;

int main()
{
    int amt, rem;

    cout<<"Enter an amount in Rupees --> ";
    cin>>amt;

    cout<<"\n\tThe money can be paid using :\n";
    rem=amt;

    cout<<"\n\t\t"<<(amt/2000)<<" notes of Rs. 2000";
    rem%=2000;

    cout<<"\n\t\t"<<(rem/500)<<" notes of Rs. 500";
    rem%=500;

    cout<<"\n\t\t"<<(rem/200)<<" notes of Rs. 200";
    rem%=200;

    cout<<"\n\t\t"<<(rem/100)<<" notes of Rs. 100";
    rem%=100;

    cout<<"\n\t\t"<<(rem/50)<<" notes of Rs. 50";
    rem%=50;

    cout<<"\n\t\t"<<(rem/20)<<" notes of Rs. 20";
    rem%=20;

    cout<<"\n\t\t"<<(rem/10)<<" notes of Rs. 10";
    rem%=10;

    cout<<"\n\n\tThe rest Rs. "<<rem<<" to be paid in coins\n\n\n";

    return 0;
}
