//WAP to convert decimal to octal no.

#include <iostream>
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
            r = dec%8;
            eqv = to_string(r) + eqv;
            dec/=8;
        }
        return eqv;
    }
}

int main()
{
    int dec;

    cout<<"Enter the Decimal number --> ";
    cin>>dec;

    cout<<"\n\tResult ---> "<<Convert(dec)<<"\n\n";

    return 0;
}
