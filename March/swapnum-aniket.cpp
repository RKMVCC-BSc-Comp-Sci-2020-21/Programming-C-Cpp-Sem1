//Program to Swap Of two numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter numbers to swap: \n";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swap you Get:\n";
	cout<<a<<"\n"<<b;
	return 0;
}//End of main
