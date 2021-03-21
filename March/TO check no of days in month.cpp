//TO check no of days in month in c++

#include<iostream>
#include<cmath>

using namespace std;


int main()
{
	int month;
	do
	{
		
		cout<<"Please enter a month number (1-12)";
		cin>>month;
	}
	while (month<1 || month>12 );
	
	if(month==2)
	cout<<"The no of days is 29(If it is not leap year) ";
	
	else if(month ==1 || month == 3 || month ==5 || month == 7 || month ==9 || month==11) 
	cout<<"The no of days is 31 ";
	
	else 
	cout<<"The no of days is 30 ";
	
	
	return 0;
	
}
