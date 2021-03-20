//WAP to check for Palindrome no.

#include <iostream>
using namespace std;

int main()
{
    int num, r, rev, p;

    cout<<"Enter a no. --> ";
    cin>>num;
    p=num;

    while(num!=0)
    {
        r = num%10;
        rev = rev*10 + r;
        num = num/10;
    }

    if(p==rev)
        cout<<"\n\tPalindrome no.\n\n";
    else
        cout<<"\n\tNot a Palindrome no.\n\n";

    return 0;
}
