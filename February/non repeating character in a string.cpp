#include <iostream>
using namespace std;

int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    
    //Accepting inputs.
    cout<<"Enter the string: ";
    gets(str);
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    
    cout<<"The non repeating characters are: ";
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)//Finding non repeating charcters and printing them.
        {
           cout<<char(i)<<"  " ;
        }
    }
    return 0;
}
