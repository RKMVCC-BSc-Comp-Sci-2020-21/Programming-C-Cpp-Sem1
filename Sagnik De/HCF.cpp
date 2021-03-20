//WAP to print the HCF of 2 nos.

#include <iostream>
using namespace std;

int main()
{
    int a, b, r, i, big, small;

    cout<<"Enter the 2 nos. :"<<endl;
    cin>>a>>b;

    if(a>b)
    {
        big=a;
        small=b;
    }
    else if(b>a)
    {
        big=b;
        small=a;
    }
    else
    {
        cout<<"\n\tHCF is "<<a<<"\n\n";
        return 0;
    }

    do
    {
       r=big%small;

       if(r==0)
       {
           cout<<"\n\tHCF is "<<small<<"\n\n";
           return 0;
       }
       else
       {
           big=small;
           small=r;
       }
    }while(r>0);

    return 0;
}
