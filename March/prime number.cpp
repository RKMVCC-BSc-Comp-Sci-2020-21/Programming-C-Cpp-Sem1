//prime number
#include<iostream>
using namespace std;

bool isPrimeNumber(int n)
{
	bool prime = true;  //initiate the answer
	
	for (int i=2;i<n && prime ;i++)
	{
		if (n%i==0)
		{
			prime=!prime;     //if the mod result is 0 then it is not a prime number
		}
	}
	
	return prime;    //return the answer
	
}


// I use a function here


int main ()
{
	if (isPrimeNumber (11))
	{
		 cout << "Prime number";
	}
	else
	 {
	 	cout<<"not a prime number";		
	}
}
