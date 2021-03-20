//WAP to convert Hexadecimal to Octal Number

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int DigitToDecimal(int asc)
{
    if((asc>=48)&&(asc<=57))
        return(asc-48);
    else if((asc>=65)&&(asc<=90))
        return(asc-55);

}

string ToOctal(int dec)
{
    int r;
    string eqv="";

    if (dec==0)
        return "0";
    else
    {
        while(dec>0)
        {
            r = dec%8;
            eqv = to_string(r) + eqv;
            dec/=8;
        }
        return eqv;
    }
}

int main()
{
    string hex="", oct="";
    int dig=0, i, asc, res=0, pos=0, t=0;

    cout<<"Enter the hexadecimal no. --> ";
    cin>>hex;

    for(i=0; i<hex.length(); i++)
    {
        asc = int(hex[i]);
        dig = DigitToDecimal(asc);
        pos = hex.length() - i - 1;
        t = (pow(16,pos)*dig);
        res = res + t;
    }
    oct = ToOctal(res);

    cout<<"\n\tResult --> "<<oct<<"\n\n";

    return 0;
}

