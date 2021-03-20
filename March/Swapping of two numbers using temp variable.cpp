// Swapping of two numbers using temp variable //

#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g,h;
	
	cout<<"Printing the swapping of two numbers using the temp variable"<<endl;
	cout<<"Enter the first number"<<endl;
	cin>>a;
	
	cout<<"The number after swapping"<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"The first number after swapping is"<<endl;
	cout<<a<<endl;
	
	cout<<"The second number after swapping is"<<endl;
	cout<<b<<endl;
	return 0;
}
