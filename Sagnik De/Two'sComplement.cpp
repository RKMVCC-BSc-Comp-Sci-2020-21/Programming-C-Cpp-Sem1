//Write a Program to Enter a no. and display its Binary Equivalent with 2's Complement

#include <iostream>
#include <cstring>
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
        return eqv;
    }
}

string Complement(string bin)
{
    string res = "";
    int ind = bin.length() - 1;

    while(bin[ind]=='0')
    {
        res = "0" + res;
        ind--;
    }
    res = "1" + res;
    for(int i=ind-1; i>=0; i--)
    {
        if(bin[i]=='1')
            res = "0" + res;
        else
            res = "1" + res;
    }

    return res;
}

int main()
{
    int dec;
    string bin=" ";

    cout<<"Enter the Decimal number --> ";
    cin>>dec;
    bin = Convert(dec);
    cout<<"\n\tBinary Equivalent ---> "<<bin;
    cout<<"\n\tTwo's Complement ----> "<<Complement(bin);

    cout<<"\n\n";
    return 0;
}
