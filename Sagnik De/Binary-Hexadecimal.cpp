//WAP to convert binary to hexadecimal no.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ConvertToDecimal(int bin)
{
    int r, t, dig=0, eqv=0;

    while(bin>0)
    {
        r = bin%10;
        t = (pow(2,dig++)) * r;
        eqv += t;
        bin /= 10;
    }

    if(eqv<10)
        return (to_string(eqv));
    else
    {
        switch(eqv)
        {
            case 10: return "A"; break;
            case 11: return "B"; break;
            case 12: return "C"; break;
            case 13: return "D"; break;
            case 14: return "E"; break;
            case 15: return "F"; break;
        }
    }
}

int main()
{
    int bin;
    string hex="";

    cout<<"Enter the binary number --> ";
    cin>>bin;

    while(bin>0)
    {
        hex =  ConvertToDecimal(bin%10000) + hex;
        bin =  bin/10000;
    }

    cout<<"\n\tResult ---> "<<hex<<"\n\n";

    return 0;
}
