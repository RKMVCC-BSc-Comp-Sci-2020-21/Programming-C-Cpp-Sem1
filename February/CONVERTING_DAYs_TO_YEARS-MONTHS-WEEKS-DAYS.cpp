#include <iostream>

using namespace std;

int main(){

   int day,year,month,week;

   cout<<"Enter the number of day(s) : ";

   cin>>day;

   year = day/365;

   cout<<day<<" day(s) = "<< year <<"year(s) ";

   day = day%365;

   month = day/30;

   cout<<month<<" month(s) ";

   day = day%30;

   week = day/7;

   cout<<week<<" week(s)";

   day = day%7;

   cout<<day<<" day(s) \n";

   return 0;
}
