#include <iostream> 
using namespace std; 
void reverse(string str); 
int main() 
{ 
string str; 
cout<<"Enter a string:  ";
cin>>str;
cout<<"Reversed string:  ";
reverse(str); 
return 0; 
} 

void reverse(string str) 
{ 
for (int i=str.length()-1; i>=0; i--) 
cout << str[i]; 
}
