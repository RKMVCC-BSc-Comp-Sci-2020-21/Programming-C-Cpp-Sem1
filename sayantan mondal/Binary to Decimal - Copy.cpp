// Program to convert binary to decimal number //


#include <iostream>
#include <cmath>
using namespace std;

int ConvertToDecimal(int bin)
{
    int r, t, dig=0, eqv=0;

    while(bin>0)
    {
        r = bin%10;
        t = (pow(2,dig++)) * r;
        eqv += t;
        bin /= 10;
    }
    return eqv;
}

int main()
{
    int bin, dec;

    cout<<"Enter the binary number --> ";
    cin>>bin;

    dec = ConvertToDecimal(bin);

    cout<<"\n\tResult ---> "<<dec<<"\n\n";

    return 0;
}
