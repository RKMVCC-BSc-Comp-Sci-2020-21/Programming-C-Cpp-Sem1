//WAP to check for a Prime No.

#include <iostream>
using namespace std;

bool is_Prime(int x)
{
    int flag=0;

    if(x==1)
        return(false);

    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        return(true);
    else
        return(false);
}


int main()
{
    int num;

    cout<<"Enter a no. --> ";
    cin>>num;

    if(is_Prime(num))
        cout<<num<<" is a Prime no.\n";
    else
        cout<<num<<" is not a Prime no.\n";

    return 0;
}
