#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int count=0;

    cout<<"   Su   Mo   Tu   We   Th   Fr  Sat"<<endl<<endl;
    for(int i=1;i<=30;i++)
    {
        count++;
        cout<<setw(5)<<i;

        if(count==7)
        {
            cout<<endl;
            count =0;
        }
        
    }
}