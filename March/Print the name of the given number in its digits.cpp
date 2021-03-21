// Program to enter a number and print the names of its digits //

#include <iostream>
using namespace std;

string PrintDigit(int dig)
{
    switch(dig)
    {
        case 0 : return("Zero "); break;
        case 1 : return("One "); break;
        case 2 : return("Two "); break;
        case 3 : return("Three "); break;
        case 4 : return("Four "); break;
        case 5 : return("Five "); break;
        case 6 : return("Six "); break;
        case 7 : return("Seven "); break;
        case 8 : return("Eight "); break;
        case 9 : return("Nine "); break;
    }
}

int main()
{
    int num, r;
    string str="";

    cout<<"Enter a number --> ";
    cin>>num;

    while (num>0)
    {
        r = num%10;
        str = PrintDigit(r) + str;
        num = num/10;
    }

    cout<<"\n\tResult --> "<<str<<"\n\n";

    return 0;
}
