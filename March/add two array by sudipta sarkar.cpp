#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int m,n,i=0;
    int j=0;
    cout<<"Enter the NO of elements in first array = ";
    cin>>m;
    int a[m];
    cout<<"Enter the NO of elements in second array = ";
    cin>>n;
    int b[n];

    cout<<"Enter the elements of First array\n ";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"\n\n";
    cout<<"The First array is \n ";
    for(i=0;i<m;i++)
    {
       cout<<"\t"<<a[i];
    }



    cout<<"\nEnter the elements of Second array\n ";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }

    cout<<"\n\n";

    cout<<"\nThe Second array is \n ";
    for(i=0;i<n;i++)
    {
       cout<<"\t"<<b[i];
    }
    cout<<"\n\n";

    cout<<"After the addition of two Array \n\n\n";

    int c[m+n];
    for(i=0;i<(m);i++)
    {
        c[i]=a[i];
    }

    for(i=m,j=0;i<(m+n);i++,j++)
    {
        c[i]=b[j];
    }

    for(i=0;i<(m+n);i++)
    {
       cout<<"\t"<<c[i];
    }

    cout<<"\n\n";
    return 0;
}
