#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int convhexatooct(char hexa[]);
int main()
{
        char hexa[20];
        cout<<"\n Enter Hexadecimal Number : ";
        cin>>hexa;
        cout<<"\n Conversion of Hexadecimal Number to Octal Number : "<<convhexatooct(hexa);
        return 0;
}
int convhexatooct(char hexa[])
{
        int i, len, deci=0, oct=0;
        for(len=0; hexa[len]!='\0'; len++);
        for(i=0; hexa[i]!='\0'; i++,len--)
        {
                (hexa[i]>='0' && hexa[i]<='9');
                {
                        deci= deci + (hexa[i]-'0')*pow(16,len-1);
                }
                if(hexa[i]>='A' && hexa[i]<='F')
                {
                        deci = deci + (hexa[i]-55)*pow(16,len-1);
                }
                if(hexa[i]>='a' && hexa[i]<='f')
                {
                        deci = deci + (hexa[i]-87)*pow(16,len-1);
                }
        } // Now, variable deci contains the decimal value of given hexadecimal number.
        i=1;
        while(deci!=0)
        {
                oct = oct + (deci%8)*i;
                deci = deci/8;
                i = i*10;
        }
        return oct;
}

