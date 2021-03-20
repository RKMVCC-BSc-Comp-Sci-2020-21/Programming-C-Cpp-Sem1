//WAP to convert binary to octal no.

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
    return to_string(eqv);
}

int main()
{
    int bin;
    string oct="";

    cout<<"Enter the binary number --> ";
    cin>>bin;

    while(bin>0)
    {
        oct =  ConvertToDecimal(bin%1000) + oct;
        bin =  bin/1000;
    }

    cout<<"\n\tResult ---> "<<oct<<"\n\n";

    return 0;
}
