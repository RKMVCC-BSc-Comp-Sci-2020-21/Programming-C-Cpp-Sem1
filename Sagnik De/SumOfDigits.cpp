//WAP to find the sum of digits of a no.

#include <iostream>
using namespace std;

int main()
{
    int num, sum=0, r;

    cout<<"Enter a number --> ";
    cin>>num;

    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }

    cout<<"\n\tSum of Digits --> "<<sum<<"\n\n";

    return 0;
}
