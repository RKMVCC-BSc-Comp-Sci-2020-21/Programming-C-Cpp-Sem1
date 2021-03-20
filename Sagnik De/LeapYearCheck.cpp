//WAP to check if a year is Leap Year

#include <iostream>
using namespace std;

int main()
{
    int yr;

    cout<<"Enter a year --> ";
    cin>>yr;

    if (yr%100==0)
    {
        if (yr%400==0)
            cout<<"\n\t"<<yr<<" is a leap year.\n\n";
        else
            cout<<"\n\t"<<yr<<" is a not leap year.\n\n";
    }
    else
    {
        if (yr%4==0)
            cout<<"\n\t"<<yr<<" is a leap year.\n\n";
        else
            cout<<"\n\t"<<yr<<" is not a leap year.\n\n";
    }

    return 0;
}

