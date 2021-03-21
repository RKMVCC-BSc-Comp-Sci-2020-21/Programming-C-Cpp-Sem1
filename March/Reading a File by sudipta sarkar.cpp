#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    char fileName[30], ch;
    fstream fp;
    cout<<"Enter the Name of File: ";
    gets(fileName);
    fp.open(fileName, fstream::in);
    if(!fp)
    {
        cout<<"\nError !";
        return 0;
    }
    cout<<"\n"<<fileName<<"\n";
    while(fp>>noskipws>>ch)
        cout<<ch;
    fp.close();
    cout<<endl;
    return 0;
}
