// Find the sum of digits of a given number //

#include<iostream>

using namespace std;

int main(void)
{
	int n;
	cout<<"Enter an integer:\n";
	cin>>n;
	int s=0;
	int i=n;
	while(i!=0)
	{
		s+= (i%10);
		i/=10;
	}
	cout<<"The sum of the digits of the entered number is:"<<s;
	return 0;
}
