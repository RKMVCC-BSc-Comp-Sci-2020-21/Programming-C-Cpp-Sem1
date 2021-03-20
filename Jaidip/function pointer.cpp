#include <iostream>  
using namespace std;  
void printname(char *name)  
{  
    std::cout << "Name is :" <<name<< std::endl;  
}  
  
int main()  
{  
    char s[20];  // array declaration  
    void (*ptr)(char*);  // function pointer declaration  
    ptr=printname;  // storing the address of printname in ptr.  
    std::cout << "Enter the name of the person: " << std::endl;  
    cin>>s;  
    cout<<s;  
    ptr(s);  // calling printname() function  
   return 0;  
}  
