//Converting a string from upper to lowercase
//Solution by Srijan Dutta
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str[] = "Welcome to rkmvcc";

    cout << "The uppercase version of ' " << str  << " ' is: "<< endl;
	cout << endl;
    for (int i=0; i<strlen(str); i++)
        putchar(toupper(str[i]));
    cout << endl;
    return 0;
}
