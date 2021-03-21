#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int count=0;
	cout<<"   Sun  Mon  Tue  Wed  Thu  Fri  Sat"<<endl<<endl;
	for(int i=1;i<=31;i++)
	{
		count++;
		cout<<setw(5)<<i;
		
		if(count==7)
		{
			cout<<endl;
			count = 0;
		}
	}
}
