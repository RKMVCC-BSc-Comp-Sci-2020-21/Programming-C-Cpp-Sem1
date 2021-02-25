#include<iostream>

using namespace std;

int main()
{
    char s1[100],s2[100];
    int i;
    cout<<"Enter the string s1: ";
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    cout<<"The copy string is: ";
    puts(s2);
    return 0;
}
