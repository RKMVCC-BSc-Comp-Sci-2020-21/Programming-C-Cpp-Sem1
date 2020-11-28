#include<iostream>
using namespace std;
class prime
{
	private:
		int n,r,i;
	public:
		void getdata()
		{
			cout<<"Enter the number";
			cin>>n;
		}
		void cal()
		{
			for(i=2;i<=n/2;i++)
			{
				if(n%i==0)
				break;
			}
			if(i<n/2)
			{
				cout<<"\n The number is not prime";
			}
			else
			{
				cout<<"\n The number is prime";
			}
	    }
};
int main()
{
	prime obj;
	obj.getdata();
	obj.cal();
	return 0;
}
