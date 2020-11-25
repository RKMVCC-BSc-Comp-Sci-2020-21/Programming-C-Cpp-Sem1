//WAP to find the repetitive and unique letters in a given string.
//Sagnik De

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string sen;
    int len, c, i, j;

    cout<<"Enter a sentence --> ";
    getline(cin, sen);
    len = strlen(sen.c_str());

    cout<<"\nRepetitive letters are: ";
    for(i=0; i<len-1; i++)
    {
        if(sen[i]==sen[i+1])
            cout<<sen[i]<<" ";
    }
    cout<<"\n\nAll other characters are unique\n\n";

    return 0;
}
