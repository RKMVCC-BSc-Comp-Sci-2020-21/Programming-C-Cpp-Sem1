//WAP to read the age of a candidate and determine whether he/she is eligible to vote.

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter the age : ";
    cin>>age;

    if(age>=18)
        cout<<"\n\tEligible to Vote.\n\n";
    else
        cout<<"\n\tNot eligible to Vote.\n\n";

    return 0;
}
