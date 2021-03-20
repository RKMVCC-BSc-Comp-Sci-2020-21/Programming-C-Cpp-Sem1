#include<iostream>
using namespace std;
int main()
{
	unsigned int n;
	unsigned long long factorial = 1;
	cout<<"Enter a positive ointeger:";
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		factorial *=i;
	}
	cout<<"Factorial of"<<n<<"="<<factorial;
	return 0;
}
