#include<iostream>
 
using namespace std;
 
int main()
{
	int year,day,week;
 
	cout<<"Enter No. of days:";
	cin>>day;
	
	year=day/365;
	day=day%365;
	week=day/7;
	day=day%7;
 
	cout<<"\nYears: "<<year<<"\nWeeks: "<<week<<"\nDays: "<<day<<endl;
	return 0;
}