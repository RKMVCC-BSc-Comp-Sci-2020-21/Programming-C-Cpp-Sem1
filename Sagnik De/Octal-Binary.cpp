//WAP to convert octal to binary no.

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

int main()
{
    int oct;
    string bin="";

    cout<<"Enter the octal number --> ";
    cin>>oct;

    while(oct>0)
    {
        bin =  Convert(oct%10) + bin;
        oct =  oct/10;
    }

    cout<<"\n\tResult ---> "<<bin<<"\n\n";

    return 0;
}
