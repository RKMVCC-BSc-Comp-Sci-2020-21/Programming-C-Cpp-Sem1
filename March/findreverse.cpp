//Program to reverse a number
#include<iostream>
using namespace std;
int main()
{
	int N,rem,rev=0;
	cout<<"Enter The number to reverse:\t";
	cin>>N;
	while(N!=0)
	{
		rem=N%10;
		rev=rev*10+rem;
		N=N/10;
	}
	cout<<"Reverse of the number is\t"<<rev;
	return 0;
}//end of main
