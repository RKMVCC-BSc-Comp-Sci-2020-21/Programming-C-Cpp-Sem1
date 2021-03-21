#include<iostream>
using namespace std;
class test
{
	private:
		int x,y;
	public:
		void getdata()
		{
			cout<<"Enter the two numbers : ";
			cin>>x>>y;
			}	
		friend void calculate(test &);
};
void calculate(test &t)
{
	int a;
	a=(t.x+t.y)/2;
	cout<<"\n\n The average of the numbers is : "<<a;
}
int main()
{
	test tt;
	tt.getdata();
	calculate(tt);
	return 0;
}
