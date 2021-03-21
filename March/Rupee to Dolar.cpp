// Rupee to Dolar.cpp //

#include<iostream>
using namespace std;
int main()
{
	int rs=10;
	float dol=0;
	cout<<"Rupees Dollar"<<endl;
	
	cout<<"__________________"<<endl;
	for(rs=10;rs<=250;rs+=5)
	{
		dol=(float)rs/73.66;
		cout<<"Rs."<<rs<<"="<<"$"<<dol<<endl;
	}
	return 0;
}
