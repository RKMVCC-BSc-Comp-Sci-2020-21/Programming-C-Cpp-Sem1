// Divisibility //

#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout<<"It is a program to check the number is divisible by 3";
	cout<<"\n\n\nEnter the terminal number : ";
	cin>>a;
	for(i=0;i<=a;i++)
	{
		 if(i%3==0)
		 {
		 	  cout<<"\n\nthe number is divisible by 3 : "<<i;
		 }
		 else
		 {
		 	   cout<<"\n\nthe number is not divisible by 3 : "<<i;
		 }
	}
	return 0;
}
