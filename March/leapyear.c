#include<iostream>
using namespace std;
class year
{
	//member variabels
	int y;
	//member functions
	public:
	void getdata()
	{
		cout<<"Enter the year: ";
		cin>>y;
	}
	void isLeapYear()
	{
		if(y%400==0 || y%100!=0 && y%4==0)
		     cout<<"The year "<<y<<" is Leapyear\n";
	    else
	         cout<<"The year "<<y<<" is not leap year\n";
	} 
};
int main()
{
	year leapy;
	leapy.getdata();
	leapy.isLeapYear();
}
