// WAP to print a right angled triangle with nos.

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"Enter how many lines : ";
    cin>>n;

    cout<<"\nPattern:\n\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            cout<<j<<" ";
        cout<<endl;
    }

    cout<<"\n";
    return 0;
}
