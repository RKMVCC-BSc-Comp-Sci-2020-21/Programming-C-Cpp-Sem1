//Write a menu-driven program to convert case of a String.

#include <iostream>
#include <cstring>
using namespace std;

string str;
int i, ch;

void Lower()
{
    cout<<"\nString after conversion : ";
    for(i=0; i<str.length(); i++)
    {
        if((str[i]>='A')&&(str[i]<='Z'))
            cout<<(char)(str[i]+32);
        else
            cout<<str[i];
    }
}

void Upper()
{
    cout<<"\nString after conversion : ";
    for(i=0; i<str.length(); i++)
    {
        if((str[i]>='a')&&(str[i]<='z'))
            cout<<(char)(str[i]-32);
        else
            cout<<str[i];
    }
}

int main()
{
    cout<<"Enter a String Value : ";
    getline(cin, str);

    cout<<"\nPress :\n\n1 --> Convert Uppercase to Lowercase\n2 --> Convert Lowercase to Uppercase";
    cout<<"\n\n\tEnter your choice --> ";
    cin>>ch;

    switch(ch)
    {
        case 1: Lower(); break;
        case 2: Upper(); break;
        default: cout<<"\n\t\tINVALID INPUT!";
    }

    cout<<"\n\n\n";
	return 0;
}
