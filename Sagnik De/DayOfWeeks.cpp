// WAP to enter no. (1-7) and print the corresponding day of the week.

#include <iostream>
using namespace std;

string DayName(int day)
{
    switch(day)
    {
        case 1 : return("Monday "); break;
        case 2 : return("Tuesday "); break;
        case 3 : return("Wednesday "); break;
        case 4 : return("Thursday "); break;
        case 5 : return("Friday "); break;
        case 6 : return("Saturday "); break;
        case 7 : return("Sunday "); break;
        default: return("INVALID INPUT");
    }
}

int main()
{
    int num;

    cout<<"Enter day number (1-7) --> ";
    cin>>num;

    cout<<"\n\tResult --> "<<DayName(num)<<"\n\n";

    return 0;
}
