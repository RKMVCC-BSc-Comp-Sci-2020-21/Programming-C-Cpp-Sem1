#include<iostream>
using namespace std;
class area
{
	public:
		int cal(int l,int b)
		{
			int a;
			a=(l*b);
			return a;
		}
		double cal(double s)
		{
			double a;
			a=(s*s);
			return a;
		}
		double cal(int r)
		{
			double a;
			a=(3.14*r*r);
			return a;
		}
};
int main()
{
	int m,n,k;
	double p;
	cout<<"Enter the length of the rectangle : ";
	cin>>m;
	cout<<"Enter the breadth : ";
	cin>>n;
	cout<<"Enter the radius of the circle : ";
	cin>>k;
	cout<<"Enter the side of the square : ";
	cin>>p;
	area obj;
	int x=obj.cal(m,n);
	double y=obj.cal(k);
	double z=obj.cal(p);
	cout<<"\nArea of the rectangle : "<<x;
	cout<<"\nArea of the square :  "<<z;
	cout<<"\nArea of the circle : "<<y;
	return 0;
}
