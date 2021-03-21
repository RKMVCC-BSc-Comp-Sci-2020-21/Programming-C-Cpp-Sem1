//Program to find sq. root of a number //

#include <iostream>
using namespace std;

int main()
{
    int sqrt=0, num;

    cout<<"Enter a no. --> ";
    cin>>num;

    for(int i=1; i<num; i++)
    {
        if (i*i==num)
            sqrt=i;
    }

    if (sqrt==0)
        cout<<"\n\t"<<num<<" is not a perfect square\n\n";
    else
        cout<<"\n\tSquare Root --> "<<sqrt<<"\n\n";

    return 0;
}


