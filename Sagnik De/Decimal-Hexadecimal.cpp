//WAP to convert decimal to hexadecimal no.

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
            r = dec%16;

            if(r<10)
                eqv = to_string(r) + eqv;
            else
            {
                switch(r)
                {
                    case 10: eqv = "A" + eqv; break;
                    case 11: eqv = "B" + eqv; break;
                    case 12: eqv = "C" + eqv; break;
                    case 13: eqv = "D" + eqv; break;
                    case 14: eqv = "E" + eqv; break;
                    case 15: eqv = "F" + eqv; break;
                }
            }
            dec/=16;
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
