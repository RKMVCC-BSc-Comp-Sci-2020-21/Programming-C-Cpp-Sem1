// WAP to enter the first day of month and print its Calendar (Assume it has 31 days)

#include <iostream>
#include <stdlib.h>
using namespace std;

int ch, date=1, i;

void input()
{
    cout<<"What is the first day of the month?\n"<<endl;
    cout<<"0 for Monday\n";
    cout<<"1 for Tuesday\n";
    cout<<"2 for Wednesday\n";
    cout<<"3 for Thursday\n";
    cout<<"4 for Friday\n";
    cout<<"5 for Saturday\n";
    cout<<"6 for Sunday\n";
    cout<<"\n\tEnter your choice --> ";
    cin>>ch;
}

int main()
{
    input();

    if(ch>6)
        cout<<"\n\t\tINVALID INPUT!!\n\n";
    else
    {
        system("CLS");

        cout<<"\n*********************CALENDAR***********************"<<endl;
        cout<<"\n\nMon\tTue\tWed\tThu\tFri\tSat\tSun"<<endl;

        for(i=1; i<=ch; i++)
            cout<<"  \t";

        for(i=1; i<=(7-ch); i++)
            cout<<" "<<date++<<"\t";
        cout<<"\n";

        while(date<=31)
        {
            for(i=1; i<=7; i++)
            {
                if(date<=31)
                    cout<<" "<<date++<<"\t";
                else
                    break;
            }
            cout<<"\n";
        }
        cout<<"\n\n";
    }

    return 0;
}
