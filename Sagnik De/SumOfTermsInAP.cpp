//WAP to print the sum upto nth term of an AP

#include <iostream>
using namespace std;

int main()
{
    int n, a, d, S=0;

    cout<<"Enter the first term of the AP --> ";
    cin>>a;

    cout<<"\nEnter the common diff. of AP --> ";
    cin>>d;

    cout<<"\nFind sum upto how many terms --> ";
    cin>>n;

    S = ((n/2)*(2*a + d*(n-1)));

    cout<<"\n\tSum upto "<<n<<" terms = "<<S<<"\n\n";

    return 0;
}
