//Find roots of a quardretic equetion
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;/*ax^2+bx+c*/
	float r1,r2,desc,d;
	cout<<"Enter the coefficient of quadratic equation:";
	cin>>a>>b>>c;
	desc=(b*b)-(4*a*c);
	d=2*a;
	if(desc>0)
	{
		cout<<"\nRoots are real and unequal";
		r1=(-b+sqrt(desc))/d;
		r2=(-b-sqrt(desc))/d;
		cout<<endl<<"Root1="<<r1;
		cout<<endl<<"Root2="<<r2;
	}
	else if (desc==0)
	{
			cout<<"\nRoots are real and equal";
			r1=-b/d;
			r2=r1;
			cout<<endl<<"Root1="<<r1;
		    cout<<endl<<"Root2="<<r2;
			
			
	}
	else 
	    cout<<endl<<"Roots are imaginary";
	return 0;
}
