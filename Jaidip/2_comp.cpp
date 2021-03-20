#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string bin = "100100";

    int i = bin.length();
    char newbin[i];
    i--;

    while(bin[i]=='0') //111000 = 000100
    {
        newbin[i]='0';
        i--;
    }
    newbin[i]='1';
    for(int j =i-1;j>=0;j--)
    {
        if(bin[j]=='0')
            newbin[j]='1';
        else
            newbin[j]='0';

    }
    int l = strlen(newbin);
    for(int k=0; k<l; k++)
        cout<<newbin[k];

    cout<<"\n\n";
    return 0;
}