//WAP to reverse a no.

#include <iostream>
using namespace std;

int main()
{
    int num, r, rev=0;

    cout<<"Enter a no. --> ";
    cin>>num;

    while(num!=0)
    {
        r = num%10;
        rev = rev*10 + r;
        num = num/10;
    }

    cout<<"\nReverse --> "<<rev<<"\n\n";

    return 0;
}
