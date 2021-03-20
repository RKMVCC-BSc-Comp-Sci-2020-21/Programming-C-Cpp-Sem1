//WAP to convert octal to hexadecimal no.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string Convert(int dec)
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
        if (eqv.length()==1)
            return ("00"+eqv);
        else if (eqv.length()==2)
            return ("0"+eqv);
        else
            return eqv;
    }
}

string ConvertToHexadecimal(int bin)
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
    int oct;
    string bin="", hex="";

    cout<<"Enter the octal number --> ";
    cin>>oct;

    while(oct>0)
    {
        bin =  Convert(oct%10) + bin;
        oct =  oct/10;
    }

    int bin_num  = stoi(bin);

    while(bin_num>0)
    {
        hex =  ConvertToHexadecimal(bin_num%10000) + hex;
        bin_num =  bin_num/10000;
    }

    cout<<"\n\tResult ---> "<<hex<<"\n\n";

    return 0;
}
