//WAP to print a sentence after converting each vowel to upper case

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string sen;
    int len;
    char ch;

    cout<<"Enter a sentence --> ";
    getline(cin, sen);
    len = strlen(sen.c_str());
    cout<<"\n\tResult --> ";

    for(int i=0; i<len; i++)
    {
        ch=sen[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            putchar(toupper(ch));

        }
        else
            putchar(ch);
    }

    cout<<"\n\n";

    return 0;
}
