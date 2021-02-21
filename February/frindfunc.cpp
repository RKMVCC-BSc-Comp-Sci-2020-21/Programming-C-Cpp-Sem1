//Using friend function to overload operators
#include<iostream>

using namespace std;

class Distance
{

	int ft,inch;
	public:
		Distance();
		Distance(int , int);

		void output();

		friend Distance operator +(Distance &, Distance &);
};
Distance :: Distance()
{
	ft=0;
	inch=0;
}
Distance :: Distance(int f, int i)
{
	ft=f;
	inch=i;
}
void Distance :: output()
{
	cout<<"\n\t"<<ft<<" Feet "<<inch<<" Inchs .";
}
Distance operator +(Distance &d1 ,Distance &d2)
{
	Distance d3;
	d3.ft = d1.ft+d2.ft;
	d3.inch=d1.inch+d2.inch;
	if(d3.inch>=12)
	{
		d3.ft= d3.ft+ (d3.inch/12);
		d3.inch= d3.inch%12;
	}
	return d3;
}
int main()
{
	Distance d1(3,7), d2(4,11) ,d3;
	d3=d1+d2;	//IMAGINE D1.+(D2)
	d3.output();
	return 0;
}
