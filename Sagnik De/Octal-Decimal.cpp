//WAP to convert octal to decimal no.

#include <iostream>
#include <cmath>
using namespace std;

int ConvertToDecimal(int oct)
{
    int r, t, dig=0, eqv=0;

    while(oct>0)
    {
        r = oct%10;
        t = (pow(8,dig++)) * r;
        eqv += t;
        oct /= 10;
    }
    return eqv;
}

int main()
{
    int oct, dec;

    cout<<"Enter the octal number --> ";
    cin>>oct;

    dec = ConvertToDecimal(oct);

    cout<<"\n\tResult ---> "<<dec<<"\n\n";

    return 0;
}
