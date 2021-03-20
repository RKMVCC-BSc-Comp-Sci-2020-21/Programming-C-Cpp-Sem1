//WAP to print the fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int num, i, a=0, b=1, c;

    cout<<"Enter the no. of terms --> ";
    cin>>num;

    cout<<"\nFibonacci Series: "<<a<<" "<<b<<" ";
    for(i=1; i<=num-2; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    cout<<"\n\n";

    return 0;
}
