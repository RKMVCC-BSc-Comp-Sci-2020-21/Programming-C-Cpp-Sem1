//WAP to find the factors of a no.

#include <iostream>
using namespace std;

int main()
{
    int num, i;

    cout<<"Enter a no. --> ";
    cin>>num;

    cout<<"\n\tFactors of "<<num<<" are: ";
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
            cout<<i<<" ";
    }
    cout<<"\n\n";

    return 0;
}
