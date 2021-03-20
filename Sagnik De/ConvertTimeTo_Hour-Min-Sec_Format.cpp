//WAP to convert seconds into Hours:Minutes:Seconds format

#include <iostream>
using namespace std;

int main()
{
    int val, hrs, mins, sec, rem;

    cout<<"Enter the value in seconds --> ";
    cin>>val;

    hrs = val/3600;
    rem = val%3600;
    mins = rem/60;
    sec = rem%60;

    cout<<"\n\t"<<val<<" seconds is equivalent to "<<hrs<<" hours, "<<mins<<" minutes and "<<sec<<" seconds.\n\n";

    return 0;
}
