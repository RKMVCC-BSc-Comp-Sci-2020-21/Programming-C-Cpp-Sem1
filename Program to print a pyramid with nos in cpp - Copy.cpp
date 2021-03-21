// Program to print a pyramid with nos.//

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"Enter how many lines : ";
    cin>>n;

    cout<<"\nPattern:\n\n";
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
            cout<<" ";
        for(k=1; k<=i; k++)
            cout<<i<<" ";
        cout<<endl;
    }

    cout<<"\n";
    return 0;
}
