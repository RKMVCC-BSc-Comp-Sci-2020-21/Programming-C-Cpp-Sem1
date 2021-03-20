//WAP to print the no. of vowels and consonants in a sentence

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sen;
    int len,i, vow=0, con=0;

    cout<<"Enter a sentence :"<<endl;
    getline(cin, sen);
    len=sen.length();

    for(i=0; i<len; i++)
    {
        if ((sen[i]=='a')||(sen[i]=='e')||(sen[i]=='i')||(sen[i]=='o')||(sen[i]=='u')||(sen[i]=='A')||(sen[i]=='E')||(sen[i]=='I')||(sen[i]=='O')||(sen[i]=='U'))
            vow++;
        else if ((sen[i]==',')||(sen[i]=='.')||(sen[i]=='?')||(sen[i]=='!')||(sen[i]==' '))
            continue;
        else
            con++;
    }

    cout<<"\nThere are "<<con<<" consonants and "<<vow<<" vowels."<<endl;

    return 0;
}
