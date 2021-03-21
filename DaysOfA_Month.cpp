#include<iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter month number (1-12):";
    cin >> month;

    if(month == 1)
    {
        cout << "Enter month : January " <<endl;
        cout << "No. of days : 31 days" <<endl;
    }
    else if(month == 2)
    {
        cout << "Enter month : February " <<endl;
        cout << "No. of days :  28 or 29 days" <<endl;
    }
    else if(month == 3)
    {
        cout << "Enter month : March " <<endl;
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 4)
    {
        cout << "Enter month : April " <<endl;
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 5)
    {
        cout << "Enter month : May " <<endl;
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 6)
    {
        cout << "Enter month : June " <<endl;
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 7)
    {
        cout << "Enter month : July " <<endl;
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 8)
    {
        cout << "Enter month : August " <<endl;
        cout << "No. of days :  31 days" <<endl;
    }
    else if(month == 9)
    {
        cout << "Enter month : September " <<endl;
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 10)
    {
        cout << "Enter month : October " <<endl;
        cout << "No. of days :  31 days" <<endl;

    }
    else if(month == 11)
    {
        cout << "Enter month : November " <<endl;
        cout << "No. of days :  30 days" <<endl;
    }
    else if(month == 12)
    {
        cout << "Enter month : December " <<endl;
        cout << "No. of days :  31 days" <<endl;
    }
    else
    {
        cout << "Invalid input! Please enter month number between (1-12).";
    }

    return 0;

}
