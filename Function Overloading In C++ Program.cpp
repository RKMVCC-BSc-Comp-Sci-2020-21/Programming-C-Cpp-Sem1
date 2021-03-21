#include<iostream>
#include<cmath>
using namespace std;
class shape
{
	//Member functions
	public:
	void area(int r)
	{
		cout<<"Area of Circle:"<<(3.141*r*r)<<endl;
    }
    void area(int len, int bred)
	{
		cout<<"Area of Rectangle:"<<(len*bred)<<endl;
    }
    void area(int a, int b, int c)
	{
		int s=(a+b+c)/2;
		cout<<"Area of Traingle:" <<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    }
};
int main()
{
	shape s;
	s.area(5);
	s.area(5,4);
	s.area(5,4,3);
}
