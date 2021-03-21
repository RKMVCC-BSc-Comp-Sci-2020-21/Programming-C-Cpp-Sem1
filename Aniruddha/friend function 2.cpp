#include<iostream>
using namespace std;
class test
{
	private:
		int x,y;
	public:
		void input();
		friend int main(test &s);
};
void test::input()
{
	cout<<"Enter the two numbers: ";
	cin>>x>>y;
}
int main(test &s)
{
	int m;
	m=(s.x+s.y)/2;
	return m;
}
int main()
{
	test t;
	t.input();
	cout<<"\n\nAverage is "<<m(t);
	return 0;
}
