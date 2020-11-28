#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    char str[100];
    int i,vowCount=0,consCount=0;
    cout<<"Enter a string for count vowel and consonant\n";
    gets(str);
    for(i=0; str[i]; i++){
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
    ||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' ){
        vowCount++;//vowel counter incremented by 1
    }
    else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )){
        consCount++;
    }
}
cout<<"Number of vowels:"<<vowCount<<endl;//display number of vowels
cout<<"Number of consonants:"<<consCount<<endl;//display number of consonant
getch();
    return 0;
}
