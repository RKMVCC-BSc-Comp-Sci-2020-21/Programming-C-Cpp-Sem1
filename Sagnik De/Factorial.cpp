//WAP to find the factorial of a no.

#include <iostream>
using namespace std;

int main()
{
    int num, fact=1, i;

    cout<<"Enter a no. --> ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        if(num==0)
            {
                fact=1;
                break;
            }
        else
            fact=fact*i;
    }
    cout<<"\n\tFactoral of "<<num<<" is: "<<fact<<"\n\n";

    return 0;
}
