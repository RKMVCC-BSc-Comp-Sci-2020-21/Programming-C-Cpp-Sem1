//WAP to convert Hexadecimal to Binary Number

#include <iostream>
#include <string>
using namespace std;

int DigitToDecimal(int asc)
{
    if((asc>=48)&&(asc<=57))
        return(asc-48);
    else if((asc>=65)&&(asc<=90))
        return(asc-55);

}

string DigitToBinary(int dec)
{
    int r;
    string eqv="";

    if (dec==0)
        return "0";
    else
    {
        while(dec>0)
        {
            r = dec%2;
            eqv = to_string(r) + eqv;
            dec/=2;
        }
        return eqv;
    }
}

int main()
{
    string hex="", res="";
    int dig=0, i, asc;

    cout<<"Enter the hexadecimal no. --> ";
    cin>>hex;

    for(i=0; i<hex.length(); i++)
    {
        asc = int(hex[i]);
        dig = DigitToDecimal(asc);
        res = res + DigitToBinary(dig);
    }

    cout<<"\n\tResult --> "<<res<<"\n\n";

    return 0;
}
