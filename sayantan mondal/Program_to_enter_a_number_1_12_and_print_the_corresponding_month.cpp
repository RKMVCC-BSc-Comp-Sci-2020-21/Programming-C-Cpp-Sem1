// Program to enter a number (1-12) and print the corresponding month with number of days in it //



#include <iostream>
using namespace std;

string DaysInMonth(int days)
{
    switch(days)
    {
        case 1 : return("January - 31 days"); break;
        case 2 : return("February - 28 days"); break;
        case 3 : return("March - 31 days"); break;
        case 4 : return("April - 30 days"); break;
        case 5 : return("May - 31 days"); break;
        case 6 : return("June - 30 days"); break;
        case 7 : return("July - 31 days "); break;
        case 8 : return("August - 31 days "); break;
        case 9 : return("September - 30 days "); break;
        case 10: return("October - 31 days "); break;
        case 11: return("November - 30 days "); break;
        case 12: return("December - 31 days "); break;
        default: return("INVALID INPUT");
    }
}

int main()
{
    int num;

    cout<<"Enter month number (1-12) --> ";
    cin>>num;

    cout<<"\n\tResult : "<<DaysInMonth(num)<<"\n\n";

    return 0;
}
