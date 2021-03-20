

#include <iostream>
using namespace std;

int HCF(int a, int b)
{
    int big, small, r;

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
        return a;

    do
    {
       r=big%small;

       if(r==0)
           return small;
       else
       {
           big=small;
           small=r;
       }
    }while(r>0);

}

int main()
{
    int a, b, LCM;

    cout<<"Enter 2 nos. :"<<endl;
    cin>>a>>b;

    LCM = (a*b)/HCF(a,b);

    cout<<"\n\tLCM = "<<LCM<<"\n\n";

    return 0;
}
