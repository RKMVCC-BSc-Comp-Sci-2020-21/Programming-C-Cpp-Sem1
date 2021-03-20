//WAP to convert Hexadecimal to Decimal Number

#include <iostream>
#include <cmath>
using namespace std;

int DigitToDecimal(int asc)
{
    if((asc>=48)&&(asc<=57))
        return(asc-48);
    else if((asc>=65)&&(asc<=90))
        return(asc-55);
}

int main()
{
    string hex="";
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

    cout<<"\n\tResult --> "<<res<<"\n\n";

    return 0;
}
