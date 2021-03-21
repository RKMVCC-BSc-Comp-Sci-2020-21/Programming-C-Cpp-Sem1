#include <iostream>
using namespace std;
int main() 
{
char str[100];
char c ;
cout<<"Enter the String: ";
cin>>str;
cout<<"Enter the character: ";
cin>>c;
int count = 0;
for(int i = 0; str[i] != '\0'; i++) {
if(str[i] == c)
count++;
}
cout<<"Number of Occurrence of "<<c<<" in the string is "<<count;
return 0;
}
